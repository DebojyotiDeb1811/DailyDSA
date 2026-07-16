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

void Display(struct Node *N){

    while (N != NULL) {
        cout << N->DATA << "\t";
        N = N->NEXT;
    }
    cout << endl;
}

void MaxElement(struct Node *N){

    int MAX = First->DATA;

    for( ; N != NULL; N=N->NEXT){
        if(N->DATA > MAX){
            MAX = N->DATA;
        }
    }

    cout << "MAX ELEMENT FROM LINKED LIST IS " << MAX << endl;
}

void MinElement(struct Node *N){

    int MIN = First->DATA;

    for( ; N != NULL; N=N->NEXT){
        if(N->DATA < MIN){
            MIN = N->DATA;
        }
    }

    cout << "MIN ELEMENT FROM LINKED LIST IS " << MIN << endl;
}

int main(){

    int A[] = {0, 2, 4, 6, 8};

    CreateLL(A,5);
    Display(First);

    MaxElement(First);
    MinElement(First);
}