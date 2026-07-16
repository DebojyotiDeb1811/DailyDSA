#include <iostream>
using namespace std;

struct Node{
    int DATA;
    struct Node *NEXT;
}*FIRST;

void CreateLL(int A[], int n){

    struct Node *LAST,*TEMP;

    FIRST = new Node;
    FIRST->DATA = A[0];
    FIRST->NEXT = NULL;
    LAST = FIRST;

    for(int i = 1; i < n; i++){
        TEMP = new Node;
        TEMP->DATA = A[i];
        TEMP->NEXT = NULL;
        LAST->NEXT = TEMP;
        LAST = TEMP;
    }
}

void Display(){

    struct Node *P;
    P = FIRST;

    for( ;P != NULL; P = P->NEXT){
        cout << P->DATA << "\t";
    }
    cout << endl;
}

void ReverseByArray(){

    struct Node *P;
    P = FIRST;

    int count = 0;

    while(P != NULL) {
        count++;
        P = P->NEXT;
    }

    int i = 0;
    int *B = new int[count];

    P = FIRST;

    while( P != NULL){
        B[i++] = P->DATA;
        P = P->NEXT;
    }

    P = FIRST;
    i--;

    for( i; i > -1; i--){
        P->DATA = B[i];
        P = P->NEXT;
    }

    delete []B;
}

void ReverseBySlidingPointer() {

    struct Node *P = FIRST;
    struct Node *q = NULL;
    struct Node *r = NULL;

    while (P != NULL) {
        r = q;           
        q = P;           
        P = P->NEXT;     
        
        q->NEXT = r;    
    }
    
    FIRST = q;    
}

void ReverseByRecursion(struct Node *Q, struct Node *P){

    if(P != NULL){
        ReverseByRecursion(P,P->NEXT);
        P->NEXT = Q;
    }

    else{
        FIRST = Q;
    }
    
}

int main(){

    int A[] = {5,7,1,3,9};

    CreateLL(A,5);

    Display();

    ReverseByArray();

    Display();

}