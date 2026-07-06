#include <iostream>
using namespace std;

struct array{

     int A[10];
     int size;
};

void BinarySearch(struct array a ,int key){

    int low = 0;
    int high = a.size - 1;
    int mid;

    while(low <= high){

        mid = (low + high)/2;

        if( key==a.A[mid]){
           cout << "ELEMENT FOUND AT INDEX " << mid;
           return;
        }

        else if( key < a.A[mid]){
           high = mid - 1;
        }

        else{
           low = mid + 1;
        }
    } 
    
    cout << "KEY NOT FOUND" << endl;
}

int main(){

    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    BinarySearch( arr , 8);

}