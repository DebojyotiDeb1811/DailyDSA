#include <iostream>
using namespace std;

struct Node{
    int Data;
    struct Node * Next;
}*First,*Second,*Third;

void CreateLL1(int A1[] , int n){

    int i;
    struct Node *T,*Last;

    First = new Node;
    First->Data = A1[0];
    First->Next = NULL;
    Last = First;

    for(int i = 1; i < n; i++){
        T = new Node;
        T->Data = A1[i];
        T->Next = NULL;
        Last->Next = T;
        Last = T;
    }
}

void CreateLL2(int A2[] , int n){

    int i;
    struct Node *T,*Last;

    Second = new Node;
    Second->Data = A2[0];
    Second->Next = NULL;
    Last = Second;

    for(int i = 1; i < n; i++){
        T = new Node;
        T->Data = A2[i];
        T->Next = NULL;
        Last->Next = T;
        Last = T;
    }
}

void Merge(){

    struct Node *Last;

    if(First->Data < Second->Data){
        Last = First;
        Third = First;
        First = First->Next;
        Last->Next = NULL;
    }

    else{
        Last = Second;
        Third = Second;
        Second = Second->Next;
        Last->Next = NULL;
    }

    while(First != NULL && Second != NULL){

        if(First->Data < Second->Data){
        Last->Next = First;
        Last = First;
        First = First->Next;
        Last->Next = NULL;
      }

        else{
        Last->Next = Second;
        Last = Second;
        Second = Second->Next;
        Last->Next = NULL;
      }
    }

    if(First != NULL){
        Last->Next = First;
    }

      else{
        Last->Next = Second;
    }

}

void Display(struct Node *N){

    while (N != NULL) {
        cout << N->Data << "\t";
        N = N->Next;
    }
    cout << endl;
}

int main(){

    int A1[] = {2, 4, 5, 6, 8};
    int A2[] = {3, 7, 9, 10, 11};

    CreateLL1(A1,5);
    CreateLL2(A2,5);

    Display(First);
    Display(Second);

    Merge();

    Display(First);

}