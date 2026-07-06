#include <iostream>
using namespace std;

struct array{

     int A[10];
     int size;
};

void linearSearch(struct array *a ,int key){

     bool checker = false;

     if( a->size > 0){
        for(int i = 0; i < a->size; i++){
           if(key==a->A[i]){
             swap(a->A[i],a->A[i-1]);
             cout << "ELEMENT FOUND AT INDEX " << i; 
             checker = true;
             break;
           }
        }
            if(checker==false){
             cout << "KEY NOT FOUND";
        }
     }

     else{
        cout << "ENTER VALID ARRAY";
     }
    
}

int main(){

    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    linearSearch( &arr , 8);

    cout << endl;

    linearSearch( &arr , 8);

}