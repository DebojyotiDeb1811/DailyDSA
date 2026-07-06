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

void insert(struct array *a ,int index, int x){

   if(index > 0 && index <= a->length){
     for(int i = a->length; i > index ; i--){
        a->A[i] = a->A[i-1];
     }
     a->A[index] = x;
     a->length++;
   }

   else{
   cout << "ARRAY IS FULL";
   }
}

int main(){

   struct array arr = {{2, 4, 6, 8, 10}, 5 , 10};
   insert( &arr, 2 , 12);
   display(arr);
   
}