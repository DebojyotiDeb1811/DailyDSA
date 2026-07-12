#include <iostream>
using namespace std;

class LowerTriangularMatrix {

    private :
       
       int *A;
       int size;

    public :

      LowerTriangularMatrix(int n){
        size = n;
        A = new int[size * (size + 1) / 2];
      }

      ~LowerTriangularMatrix(){
        delete[] A; 
    }

      void Set(int i, int j, int x){
          if( i>=j ){
            A[i*(i-1)/2 + j-1] = x;
          }
      }

      int Get(int i, int j){

        if (i >= j) {
           return A[i*(i-1)/2 + j - 1];
        } 
    
        else {
           return 0;
        }
      }

      void display(){

        for (int i = 1; i <= size; i++) {
        
          for (int j = 1; j <= size; j++) {
            if (i >= j) {
                cout << A[i*(i-1)/2 + j - 1] << "\t";
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
    
    LowerTriangularMatrix LTM = LowerTriangularMatrix(n);

    cout << "ENTER ALL ELEMENTS" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            LTM.Set(i,j,x);
        }
    }

    cout << "YOUR LOWER TRIANGULAR MATRIX" << endl;

    cout << endl;

    LTM.display();
}

