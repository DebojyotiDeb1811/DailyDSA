#include <iostream>
using namespace std;

struct array {
    int A[10];
    int size;
};

void RecursiveBinarySearch(struct array a, int low, int high, int key) {
    if (low <= high) {
        
        int mid = low + (high - low) / 2;

        if (key == a.A[mid]) {
            cout << "ELEMENT FOUND AT INDEX " << mid << endl;
            return;
        }
        else if (key < a.A[mid]) {
            RecursiveBinarySearch(a, low, mid - 1, key);
        }
        else {
            RecursiveBinarySearch(a, mid + 1, high, key);
        }
    } 
    else {
        cout << "KEY NOT FOUND" << endl;
    }
}

int main() {
    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    
    RecursiveBinarySearch(arr, 0, arr.size - 1, 8);
    RecursiveBinarySearch(arr, 0, arr.size - 1, 99);

    return 0;
}