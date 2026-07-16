#include <iostream>
using namespace std;

struct Node{

    int DATA;
    struct Node *NEXT;

}*First;

void CreateLL(int A[], int n){

    int i;
    struct Node *T,*LAST;

    First = new Node;
    First->DATA = A[0];
    First->NEXT = NULL;
    LAST = First;

    for(int i = 1; i < n; i++){
        T = new Node;
        T->DATA = A[i];
        T->NEXT = NULL;
        LAST->NEXT = T;
        LAST = T;
    }
}

void Sum(struct Node *N){
    int sum = 0;
    while( N != NULL){
        sum = sum + N->DATA;
        N = N->NEXT;
    }
    cout << "SUM OF ALL ELEMENTS IS " << sum << endl;
}

void SumFor(struct Node *N){
    int sum = 0;
    for( ; N != NULL; N = N->NEXT){
        sum = sum + N->DATA;
    }
    cout << "SUM OF ALL ELEMENTS IS " << sum << endl;
}

void Display(struct Node *N){

    while (N != NULL) {
        cout << N->DATA << "\t";
        N = N->NEXT;
    }
    cout << endl;
}

int main(){

    int A[] = {0, 2, 4, 6, 8};

    CreateLL(A,5);
    Display(First);

    Sum(First);

    SumFor(First);

}