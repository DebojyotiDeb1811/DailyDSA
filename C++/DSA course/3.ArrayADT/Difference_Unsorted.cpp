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

void Difference_unsorted(struct array a, struct array b, struct array *c){
    
    int k = 0;
 
    for(int i = 0; i < a.size; i++){

        bool check = true;

        for(int j = 0; j < b.size; j++){
            if(a.A[i] == b.A[j]){
                check = false;
                break;
            }
        }

        if(check == true){
           c->A[k++] = a.A[i];
        }
    }
}

int main(){

    struct array arr1 = {{0, 2, 4, 5, 8} , 5};
    struct array arr2 = {{1, 4, 5, 7, 9} , 5};
    struct array arr3 = {{} , 10};

    cout << "ORIGINAL ARRAY" << endl;

    display(arr1, arr2, arr3);

    Difference_unsorted(arr1, arr2, &arr3);

    cout << "MODIFIED ARRAY" << endl;

    display(arr1, arr2, arr3);

}