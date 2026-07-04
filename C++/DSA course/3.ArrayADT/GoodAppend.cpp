#include <iostream>
using namespace std;

struct array{
   int *A;
   int length;
   int size;
};

void display(struct array a){

   for(int i = 0 ; i < a.length ; i++){
      cout << a.A[i] << "\t";
   }   
}

void append(struct array *a , int x){

   if(a->length == a->size){

    int new_size = a->size*2;
    int *B = new int[new_size];

    for(int i = 0 ; i < a->length ; i++){
       B[i] = a->A[i];
    }

    delete []a->A;

    a->A = B;
    a->size = new_size;
    a->A[a->length++] = x; 
      
   }

   else{
     a->A[a->length++] = x; 
   }
}

int main(){

   struct array arr = {new int[arr.size], 0 , 2};
    append(&arr, 10); 
    append(&arr, 20); 
    append(&arr, 30); 
    append(&arr, 40);
    append(&arr, 50); 
    append(&arr, 12);
    display(arr);

    delete[] arr.A;
   
}