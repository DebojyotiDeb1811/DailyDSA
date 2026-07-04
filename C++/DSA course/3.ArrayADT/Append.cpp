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

void append(struct array *a , int x){

   if(a->length < a->size){
      a->A[a->length++] = x; 
   }

   else{
   cout << "ARRAY IS FULL";
   }
}

int main(){

   struct array arr = {{2, 4, 6, 8, 10}, 5 , 10};
   append( &arr , 12);
   display(arr);
   
}