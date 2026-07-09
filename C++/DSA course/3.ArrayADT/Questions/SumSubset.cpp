#include <iostream>
using namespace std;

struct arrays {
    int A[10];
    int size;
};

void Sum_Subset(struct arrays a , int sum){

    bool check = false;
   
    for(int i = 0; i < a.size - 1; i++){
      for(int j = i + 1; j < a.size; j++){
         if(a.A[i] + a.A[j] == sum){
            check = true;
            cout << "THE SUM SUBSET IS " << a.A[i] << " AND " << a.A[j] << " FOR SUM " << sum << endl;
         }
      }
    }

    if(check == false){
       cout << "NO SUM SUBSET FOUND FOR " << sum;
    }
}

int main() {

    struct arrays arr = {{1, 3, 5, 7, 6, 9, 2, 4, 8, 10}, 10};
    
    Sum_Subset(arr , 10);
    
    return 0;
}