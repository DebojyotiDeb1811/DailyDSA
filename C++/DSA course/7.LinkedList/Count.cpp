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

void Count(struct Node *N){

    int count = 0;

    while (N != NULL) {
        count++;
        N = N->Next;
    }

    cout << "NO. OF ELEMENTS IN LINKED LIST IS " << count;
}

int CountRecursive(struct Node *N){

    int count = 0;

    if( N == 0){
        return 0;
    }

    else{
        return CountRecursive(N->Next) + 1;
    }

    cout << "NO. OF ELEMENTS IN LINKED LIST IS " << count;
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Count(First);
}