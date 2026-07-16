#include <iostream>
using namespace std;

struct Node{
    int Data;
    struct Node * Next;
}*First;

void CreateLL(int A[] , int n){

    int i;
    struct Node *T,*Last;

    First = new Node;
    First->Data = A[0];
    First->Next = NULL;
    Last = First;

    for(int i = 1; i < n; i++){
        T = new Node;
        T->Data = A[i];
        T->Next = NULL;
        Last->Next = T;
        Last = T;
    }
}

void Display(struct Node *N){

    while (N != NULL) {
        cout << N->Data << "\t";
        N = N->Next;
    }
    cout << endl;
}

void Delete(int INDEX){

    struct Node *P,*Q;
    P = First;
    Q = NULL;

    if(INDEX == 1){
        Q = P;
        P = P->Next;
        Q->Next = NULL;
        delete Q;
        First = P;
    }

    else{

        for(int i = 0; i < INDEX - 1; i++){
            Q = P;
            P = P->Next;
        }
       
       if (P != NULL) {
            Q->Next = P->Next;
            delete P;
        } else {
            cout << "INDEX OUT OF BOUNDS" << endl;
        }
    }
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Display(First);

    Delete(3);

    Display(First);

    Delete(3);

    Display(First);
}