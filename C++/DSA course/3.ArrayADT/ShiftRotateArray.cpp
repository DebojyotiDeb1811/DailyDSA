#include <iostream>
using namespace std;

struct array{

    int A[10];
    int size;

};

int r_shift(struct array *a){
    for(int i = a->size -1 ; i > -1 ; i--){
       a->A[i] = a->A[i-1];
    }
    a->A[0] = 0;
}

int l_shift(struct array *a){
    for(int i = 0; i < a->size -1 ; i++){
       a->A[i] = a->A[i+1];
    }
    a->A[a->size - 1] = 0;
}

int r_rotate(struct array *a){

    int temp = a->A[a->size-1];

    for(int i = a->size -1 ; i > -1 ; i--){
       a->A[i] = a->A[i-1];
    }

    a->A[0] = temp;
}

int l_rotate(struct array *a){

   int temp = a->A[0];

   for(int i = 0; i < a->size -1 ; i++){
       a->A[i] = a->A[i+1];
    }

   a->A[a->size-1] = temp;
}

void display(struct array a){

   for(int i = 0 ; i < a.size ; i++){
      cout << a.A[i] << "\t";
   }  
   cout << endl;
   cout << endl; 
}

int main(){

   struct array arr = {{0, 2, 4, 6, 10, 12, 14, 16, 18, 20}, 10};

   cout << "ORIGINAL ARRAY" << endl;

   display(arr);

   r_shift(&arr);

   display(arr);

   r_rotate(&arr);

   display(arr);

   l_shift(&arr);

   display(arr);

   l_rotate(&arr);

   display(arr);

}