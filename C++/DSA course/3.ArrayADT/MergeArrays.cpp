#include <iostream>
using namespace std;

struct array{
   int A[20];
   int size;
};



void display(struct array a, struct array b, struct array c){

   for(int i = 0 ; i < a.size ; i++){
      cout << a.A[i] << "\t";
   }   

   cout << endl;

   for(int i = 0 ; i < b.size ; i++){
      cout << b.A[i] << "\t";
   }

   cout << endl;

   for(int i = 0 ; i < c.size ; i++){
      cout << c.A[i] << "\t";
   }

   cout << endl;
}

void merge(struct array a, struct array b, struct array *c){

    int i = 0, j = 0, k = 0;

    while (i < a.size && j < b.size) {
        if (a.A[i] < b.A[j]) {
          c->A[k++] = a.A[i++];
        } 
        else {
          c->A[k++] = b.A[j++];
        }
    }

    for( ; i < a.size ; i++){
        c->A[k++] = a.A[i];
    }

    for( ; j < b.size ; j++){
        c->A[k++] = b.A[j];
    }
}

int main(){

    struct array arr1 = {{2, 4, 6, 8, 10}, 5};
    struct array arr2 = {{1, 3, 5, 7, 9}, 5};
    struct array arr3 = {{}, 10};

    merge(arr1,arr2,&arr3);

    display(arr1,arr2,arr3);
}