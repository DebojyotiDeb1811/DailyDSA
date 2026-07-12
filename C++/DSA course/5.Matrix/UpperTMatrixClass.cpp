#include <iostream>
using namespace std;

class UpperTriangularMatrix {

    private :
       
       int *A;
       int size;

    public :

      UpperTriangularMatrix(int n){
        size = n;
        A = new int[size * (size + 1) / 2];
      }

      ~UpperTriangularMatrix(){
        delete[] A; 
    }

      void Set(int i, int j, int x){
          if( j>=i ){
            A[j*(j-1)/2 + i-1] = x;
          }
      }

      int Get(int i, int j){

        if (j >= i) {
           return A[j*(j-1)/2 + i - 1];
        } 
    
        else {
           return 0;
        }
      }

      void display(){

        for (int i = 1; i <= size; i++) {
        
          for (int j = 1; j <= size; j++) {
            if (j >= i) {
                cout << A[j*(j-1)/2 + i - 1] << "\t";
            } else {
                cout << 0 << "\t";
            }
         }
        cout << endl;
    }

      }

};

int main(){

    int n;
    int x;

    cout << "ENTER DIMENSION :";
    cin >> n;
    
    UpperTriangularMatrix UTM = UpperTriangularMatrix(n);

    cout << "ENTER ALL ELEMENTS" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            UTM.Set(i,j,x);
        }
    }

    cout << "YOUR UPPER TRIANGULAR MATRIX" << endl;

    cout << endl;

    UTM.display();
}

