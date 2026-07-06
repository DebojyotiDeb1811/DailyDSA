#include <iostream>
using namespace std;

struct array{

    int A[10];
    int size;

};

int reverse(struct array *a){

    int B[10];

    for(int i = a->size - 1 , j = 0; i > -1 ; i-- , j++){
        B[j] = a->A[i] ;
    }

    for(int i = 0 ; i < a->size; i++){
       a->A[i] = B[i];
    }
}

void display(struct array a){

   for(int i = 0 ; i < a.size ; i++){
      cout << a.A[i] << "\t";
   }   
}

int main(){

     struct array arr = {{0, 2, 4, 6, 10, 12, 14, 16, 18, 20}, 10};

     display(arr);

     cout << endl;

     reverse(&arr);

     cout << endl;

     display(arr);

}