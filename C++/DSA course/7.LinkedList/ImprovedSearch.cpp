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

Node *ImprovedLinearSearch(struct Node *N, int KEY){

    Node *M = NULL;

    for( ; N != NULL; N = N->NEXT){
        if(N->DATA == KEY){
            if( M != NULL){
            M->NEXT = N->NEXT;
            N->NEXT = First;
            First = N;
            return N;
        }
    }
         M = N;
    }
   return NULL;
}

int main(){

    int A[] = {0, 2, 4, 6, 8};

    CreateLL(A,5);
    Display(First);

    struct Node *TEMP = ImprovedLinearSearch(First,8);

    if (TEMP){
        cout << "KEY IS FOUND : " << TEMP->DATA;
    }

    else{
        cout << "KEY IS NOT FOUND";
    }
}