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

void InsertWhileSort(int x){

    struct Node *P,*Q,*TEMP;
    TEMP = new Node;
    TEMP->Data = x;
    P = First;
    Q = NULL;

    if(First == NULL){
        First = TEMP;
        return;
    }

    if(First->Data >= x){
        TEMP->Next = First;
        First = TEMP;
        return;
    }

    while(P != NULL && P->Data < x){
        Q = P;
        P = P->Next;
    }

    TEMP->Next = P;
    Q->Next = TEMP;

}

void Display(struct Node *N){

    while (N != NULL) {
        cout << N->Data << "\t";
        N = N->Next;
    }
    cout << endl;
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Display(First);

    InsertWhileSort(7);

    Display(First);
}