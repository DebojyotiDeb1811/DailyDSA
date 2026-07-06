#include <iostream>
using namespace std;

struct array{
   int A[10];
   int length;
   int size;
};

void display(struct array a){

   for(int i = 0 ; i < a.length ; i++){
      cout << a.A[i] << "\t";
   }   
}

void Delete(struct array *a ,int index){

   if(index >= 0 && index <= a->length ){
     for(int i = index; i < a->length - 1; i++){
        a->A[i] = a->A[i+1];
     }
     a->length--;
   }
}

int main(){

   struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10 , 10};
   Delete( &arr, 2);
   display(arr);
   
}