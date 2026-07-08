#include <iostream>
using namespace std;

struct array{
   int A[10];
   int size;
};

void element_finder(struct array a){

    int diff = a.A[0];

    bool check = true;

    for(int i = 0; i < a.size; i++){
        if( a.A[i] - i != diff){
            check = false;
           while (diff < a.A[i] - i){
              cout << "MISSING ELEMENT IS " << i + diff << endl;
              diff++;
           }
        }
    }

    if(check == true){
        cout << "NO MISSING ELEMENT";
     }
}

int main(){

    struct array arr = {{6, 7, 8, 9, 11, 12, 15, 16, 17, 18},10};
    element_finder(arr);
}