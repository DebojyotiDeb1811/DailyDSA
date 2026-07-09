#include <iostream>
using namespace std;

struct arrays {
    int A[10];
    int size;
};

void find_duplicates(struct arrays a) {

    for (int i = 0; i < a.size - 1; i++) {
        
        if (a.A[i] == a.A[i + 1]) {
            int j = i + 1;
            
            while (j < a.size && a.A[j] == a.A[i]) {
                j++;
            }
            
            cout << a.A[i] << " is appearing " << (j - i) << " times" << endl;
            
            i = j - 1;
        }
    }
}

int main() {

    arrays arr = {{3, 6, 8, 8, 10, 12, 15, 15, 15, 20}, 10};
    
    find_duplicates(arr);
    
    return 0;
}