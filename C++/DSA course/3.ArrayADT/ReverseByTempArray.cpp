#include <iostream>
using namespace std;

struct array{

    int A[10];
    int size;

};

int reverse(struct array *a){

    int temp = 0;

    for(int i = 0, j = a->size - 1 ; i < j ; i++ , j--){

        temp = a->A[i];
        a->A[i] = a->A[j];
        a->A[j] = temp;
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