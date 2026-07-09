#include <iostream>
using namespace std;

struct MyArray {
    int A[10];
    int size;
};

void find_duplicates(const MyArray& a) {

    int H[21] = {0};

    for(int i = 0; i < a.size; i++){
        H[a.A[i]]++;
    }

    for(int i = 0; i < 21; i++){
      if(H[i] > 1){
       cout << "ELEMENT " << i << " IS REPEATING " << H[i] << " TIMES" << endl;
    }
  }
}


int main() {

    MyArray arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 10};
    
    find_duplicates(arr);
    
    return 0;
}