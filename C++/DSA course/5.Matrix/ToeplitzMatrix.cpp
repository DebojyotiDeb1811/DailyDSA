#include <iostream>
using namespace std;

struct Matrix {
    int *A;
    int size;
};

void Set_Toe_Matrix(struct Matrix *M, int i, int j, int x) {

    if (j >= i) {
        M->A[j-i] = x;
    }

    else if( i > j){
        M->A[M->size+i-j-1] = x;
    }
    
}

int Get_Toe_Matrix(struct Matrix M, int i, int j) {

    if (j >= i) {
       return M.A[j-i];
    }

    else if( i > j){
       return M.A[M.size+i-j-1];
    }
}

void Display(struct Matrix M) {
    
    for (int i = 1; i <= M.size; i++) {
        
        for (int j = 1; j <= M.size; j++) {

            if (j >= i) {
                cout << M.A[j-i] << "\t";
            } 
            
            else if( i > j) {
                cout << M.A[M.size+i-j-1] << "\t";
            }
        }
        cout << endl;
    }
}

int main() {

    int x;
    int d;
    struct Matrix TPM;

    cout << "ENTER DIMENSION :" << "\t";
    cin  >> d;

    TPM.size = d;
    

    TPM.A = new int[2 * TPM.size - 1];

    cout << "ENTER ALL ELEMENTS" << endl;

    for(int i = 1; i <= TPM.size; i++){
        for(int j = 1; j <= TPM.size; j++){
            cin >> x;
            Set_Toe_Matrix(&TPM,i,j,x);
        }
    }

    cout << "YOUR UPPER TRIANGULAR MATRIX" << endl;

    cout << endl;

    Display(TPM);

    delete [ ]TPM.A;

    return 0;
}