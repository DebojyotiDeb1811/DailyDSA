#include <iostream>
using namespace std;

struct array{
   int A[10];
   int size;
};

void element_finder(struct array a){

    int H[13] = {0};

    for(int i = 0; i < a.size; i++){
      H[a.A[i]] = 1;
    }

    for(int i = 1; i <= 12; i++){
      if(H[i] == 0){
         cout << "MISSING ELEMENT IS " << i << endl;
      }
    }
   
}

int main(){

    struct array arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10},10};
    element_finder(arr);
}