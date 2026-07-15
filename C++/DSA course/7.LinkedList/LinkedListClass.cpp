#include <iostream>
using namespace std;

struct Node{
    int Data;
    struct Node *Next;
};

class LinkedList{

    private :

    struct Node *First;

    public :
        
       LinkedList(){
        First = NULL;
       }
    
       void CreateLL(int A[], int n){

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

       void Display(){

         Node* N;
         N = First;

         while (N != NULL) {
          cout << N->Data << "\t";
          N = N->Next;
         }
         cout << endl;
       }
};

int main(){

    int A[] = {2, 4, 5, 6, 8};

    LinkedList L1 = LinkedList();

    L1.CreateLL(A,5);
    L1.Display();
}