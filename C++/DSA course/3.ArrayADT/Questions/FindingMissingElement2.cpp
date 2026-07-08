#include <iostream>
using namespace std;

struct array{
   int A[10];
   int size;
};

void element_finder(struct array a){

    int n = a.size + 1;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum =   0;

    for(int i = 0; i < a.size; i++) {
        actual_sum += a.A[i];
    }

    cout << "MISSING ELEMENT IS " << expected_sum - actual_sum << "\n";
}

int main(){

    struct array arr = {{1, 2, 3, 4, 5, 7, 8, 9, 10},9};
    element_finder(arr);
}