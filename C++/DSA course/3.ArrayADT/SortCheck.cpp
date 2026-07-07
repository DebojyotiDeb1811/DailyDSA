#include <iostream>
using namespace std;

struct array{

    int A[10];
    int size;

};
void sort_check(struct array a){

    bool checker = true;
    
    for(int i = 0; i < a.size - 1; i++){
        if(a.A[i] > a.A[i+1]){
           cout << "ARRAY IS UNSORTED";
           checker = false;
           break; 
        }
    }

    if(checker == true){
      cout << "ARRAY IS SORTED";
    }
}

int main(){

    struct array arr = {{0, 2, 4, 6, 8, 20, 12, 14, 16, 18}, 10};

    sort_check(arr);
}