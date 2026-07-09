#include <iostream>
using namespace std;

struct arrays {
    int A[10];
    int size;
};

void Sum_Subset_Hash(struct arrays a , int sum){

    int H[11] = {0};

    bool check = false;

    for(int i = 0; i < a.size; i++){

       int diff = sum - a.A[i];

       if(diff >= 0 && diff < 11 && H[diff] >= 0){
         check = true;
         cout << "THE SUM SUBSET IS " << a.A[i] << " AND " << diff << " FOR SUM " << sum << endl; 
       }
       
        H[a.A[i]]++;
    }

    if(check == false){
      cout << "NO SUM SUBSET FOUND FOR " << sum;
    }
}


int main() {

    struct arrays arr = {{1, 3, 5, 7, 6, 9, 2, 4, 8, 10}, 10};
    
    Sum_Subset_Hash(arr , 10);
    
    return 0;
}