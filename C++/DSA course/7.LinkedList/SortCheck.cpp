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

void SortCheck(){

    if (First == NULL || First->Next == NULL) {
        cout << "LINKED LIST IS SORTED" << endl;
        return;
    }

    bool check = true;

    struct Node *P,*Q;

    P = First->Next;
    Q = First;

    while (P != NULL) {
        
        if (Q->Data > P->Data) {
            check = false;
            break;
        }

        Q = P;
        P = P->Next;
    }

    if(check == true){
        cout << "LINKED LIST IS SORTED";
    }

    else{
        cout << "LINKED LIST IS NOT SORTED";
    }
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Display(First);

    SortCheck();
}