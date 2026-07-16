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

void Insert(int Index, int x){

    struct Node *TEMP,*PTR;

    TEMP = new Node;
    TEMP->Data = x;
    TEMP->Next = NULL;

    if(Index == 0){
        TEMP->Next = First;
        First = TEMP;
    }
    else{
        PTR = First;

        for(int i = 1; i < Index && PTR != NULL; i++){
            PTR = PTR->Next;
        }

        if(PTR != NULL) {
            TEMP->Next = PTR->Next;
            PTR->Next = TEMP;
        } else {
            cout << "Index out of bounds." << endl;
            delete TEMP;
        }
    }
}

int main(){

    int A[] = {2, 4, 5, 6, 8};

    CreateLL(A,5);

    Display(First);

    Insert(3,7);

    Display(First);
}