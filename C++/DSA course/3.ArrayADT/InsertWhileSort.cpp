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

void insert_while_sort(struct array *a , int x){

    int i = a->length -1 ;

    while(a->A[i] > x){

        a->A[i+1] = a->A[i];
        i--;

    }

    a->A[i+1] = x;
    a->length++;
    
}


int main(){

   struct array arr = {{2, 4, 6, 8, 10, 14, 16, 18, 20}, 9 , 10};

   display(arr);
   cout << endl;
   insert_while_sort( &arr, 12);
   cout << endl;
   display(arr);
   
}