#include <iostream>
using namespace std;

struct array{
   int A[10];
   int size;
};

void element_finder(struct array a){

    int low = a.A[0];
    int high = a.A[a.size - 1];
    int diff = a.A[0] - 0;

    bool check = true;

    for(int i = 0; i < a.size; i++){
        if( a.A[i] - i != diff){
           cout << "MISSING ELEMENT IS " << i + diff; 
           check = false;
           break;
        }
    }

    if(check == true){
        cout << "NO MISSING ELEMENT";
     }
}

int main(){

    struct array arr = {{1, 2, 3, 4, 5, 7, 8, 9, 10},9};
    element_finder(arr);
}