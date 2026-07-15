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

void LinerSearch(struct Node *N, int KEY){

    bool check = false;

    for( ; N != NULL; N = N->NEXT){
        if(N->DATA == KEY){
            check = true;
            break;
        }
    }

    if(check == true){
        cout << "ELEMENT FOUND" << endl;
    }

    else{
        cout << "ELEMENT NOT FOUND" << endl;
    }
}

int main(){

    int A[] = {0, 2, 4, 6, 8};

    CreateLL(A,5);
    Display(First);

    LinerSearch(First,6);
    LinerSearch(First,10);

}