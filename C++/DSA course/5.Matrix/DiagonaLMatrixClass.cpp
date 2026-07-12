#include <iostream>
using namespace std;

class Diagonal_Matrix{

  private :

    int *A;
    int size;

  public : 

    Diagonal_Matrix(int n){
        size = n;
        A = new int[size];
    }

    ~Diagonal_Matrix(){
        delete[] A; 
    }

    void Set(int i, int j, int x){
        if( i == j){
           A[i-1] = x;
        }
    }

    int Get(int i, int j){

        if( i == j){
           return A[i-1];
        }

        else{
            return 0;
        }
    }

    void Display(){

      for (int i = 1; i <= size; i++) {

        for (int j = 1; j <= size; j++) {

            if (i == j) {
                cout << A[i - 1] << "\t";
            } else {
                cout << 0 << "\t";
            }
        }

        cout << endl;
    }
    }

};

int main(){

    Diagonal_Matrix DM = Diagonal_Matrix(4);

    DM.Set(1,1,4);
    DM.Set(2,2,6);
    DM.Set(3,3,8);
    DM.Set(4,4,10);

    DM.Display();
}