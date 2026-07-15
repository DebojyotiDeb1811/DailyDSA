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

int Display(struct Node *N){

   if(N != NULL){
     cout << N->Data;
     Display(N->Next);
   }
}

int DisplayReverse(struct Node *N){

   if(N != NULL){
     Display(N->Next);
     cout << N->Data << "\t";
   }
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Display(First);
}