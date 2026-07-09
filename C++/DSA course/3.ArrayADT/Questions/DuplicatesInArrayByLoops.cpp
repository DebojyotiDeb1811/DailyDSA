#include <iostream>
using namespace std;

struct arrays {
    int A[10];
    int size;
};

void find_duplicates(struct arrays a) {

    bool check = false;

    for(int i = 0; i < a.size - 1; i++){

        int count = 1;
          
        if( a.A[i] != -1){

          for(int j = i + 1; j < a.size; j++){
            if( a.A[i] == a.A[j]){
              count++;
              a.A[j] = -1;
            }
         }

      }

      if(count > 1){
        cout << "ELEMENT " << a.A[i] << " IS REPEATING " << count << " TIMES" << endl;
        check = true;
      }
    }

    if(check == false){
       cout << "NO REPEATING ELEMENT";
    }
}


int main() {

    struct arrays arr = {{3, 7, 4, 9, 12, 6, 11, 11, 12, 10}, 10};
    
    find_duplicates(arr);
    
    return 0;
}