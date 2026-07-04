#include <iostream>
using namespace std;

int main(){

    int *A[2];
    int count = 1;

    A[0] = new int[3];
    A[1] = new int[3];
    A[2] = new int[3];

    for(int i = 0 ; i <= 2 ; i++){
        for(int j = 0; j <= 3 ; j++){
         A[i][j] = count;
         count++;
     }
    }

    cout << "ELEMENTS OF A" << endl;

    for(int i = 0 ; i <= 2 ; i++){
        for(int j = 0; j <= 3 ; j++){
        cout << A[i][j] << "\t";
     }
     cout << endl;
    }

    for(int i = 0 ; i < 3 ; i++){
        delete[] A[i];
    }
}