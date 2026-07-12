#include <iostream>
using namespace std;

struct Matrix {
    int *A;
    int size;
};

void Set_Tri_Matrix(struct Matrix *M, int i, int j, int x) {

    if (i-j == 1)  {
        M->A[i - 2] = x;
    }

    else if( i-j == 0){
        M->A[M->size - 1 + i - 1] = x;
    }

    else if( i-j == -1){
        M->A[2*(M->size) - 1 + i - 1] = x;
    }   
}

int Get_Tri_Matrix(struct Matrix M, int i, int j) {

    if (i-j == 1)  {
       return M.A[i - 2];
    }

    else if( i-j == 0){
       return M.A[M.size - 1 + i - 1];
    }

    else if( i-j == -1){
       return M.A[2*(M.size) - 1 + i - 1];
    } 
    
    else {
       return 0;
    }
}

void Display(struct Matrix M) {
    
    for (int i = 1; i <= M.size; i++) {
        
        for (int j = 1; j <= M.size; j++) {

            if (i-j == 1)  {
              cout << M.A[i - 2] << "\t";
            }

            else if( i-j == 0){
              cout << M.A[M.size - 1 + i - 1] << "\t";
            }

            else if( i-j == -1){
              cout << M.A[2*(M.size) - 1 + i - 1] << "\t";
            } 
            
            else {
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }
}

int main() {

    int x;
    int d;
    struct Matrix TRI;

    cout << "ENTER DIMENSION :" << "\t";
    cin  >> d;

    TRI.size = d;
    

    TRI.A = new int[3*(TRI.size) - 2];

    cout << "ENTER ALL ELEMENTS" << endl;

    for(int i = 1; i <= TRI.size; i++){
        for(int j = 1; j <= TRI.size; j++){
            cin >> x;
            Set_Tri_Matrix(&TRI,i,j,x);
        }
    }

    cout << "YOUR TRI-DIAGONAL MATRIX" << endl;

    cout << endl;

    Display(TRI);

    delete [ ]TRI.A;

    return 0;
}