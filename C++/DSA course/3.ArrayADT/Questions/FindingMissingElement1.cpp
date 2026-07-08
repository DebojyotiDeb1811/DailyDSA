#include <iostream>
using namespace std;

struct array{
   int A[10];
   int size;
};

void element_finder(struct array a){

     bool check = true;
     int count_low = a.A[0];

     for(int i = 0; i < a.size; i++){
        
        if(count_low != a.A[i]){
            cout << "MISSING ELEMENT IS " << count_low;
            check = false;
            break;
        }
        count_low++;
     }

     if(check == true){
        cout << "NO MISSING ELEMENT";
     }
}

int main(){

    struct array arr = {{6, 7, 8, 20, 10, 11, 12, 13, 14},9};
    element_finder(arr);
}