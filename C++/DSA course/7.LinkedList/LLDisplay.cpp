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

void DisplayRecursive(struct Node* P){
    if(P != NULL){
        cout << P->Data << "\t";
        DisplayRecursive(P->Next);
    }
    cout << endl;
}

void DisplayRecursiveReverse(struct Node* P){
    if(P != NULL){
        DisplayRecursive(P->Next);
        cout << P->Data << "\t";
    }
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Display(First);
    DisplayRecursive(First);
    DisplayRecursiveReverse(First);
}