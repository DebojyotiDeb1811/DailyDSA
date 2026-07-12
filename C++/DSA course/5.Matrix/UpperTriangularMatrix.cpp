#include <iostream>
using namespace std;

struct Matrix {
    int *A;
    int size;
};

void Set_UpT_Matrix(struct Matrix *M, int i, int j, int x) {

    if (j >= i) {
        M->A[j*(j-1)/2 + i - 1] = x;
    }
    
}

int Get_UpT_Matrix(struct Matrix M, int i, int j) {

    if (j >= i) {
        return M.A[j*(j-1)/2 + i - 1];
    } else {
        return 0;
    }
}

void Display(struct Matrix M) {
    
    for (int i = 1; i <= M.size; i++) {
        
        for (int j = 1; j <= M.size; j++) {
            if (j >= i) {
                cout << M.A[j*(j-1)/2 + i - 1] << "\t";
            } else {
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }
}

int main() {

    int x;
    int d;
    struct Matrix DM;

    cout << "ENTER DIMENSION :" << "\t";
    cin  >> d;

    DM.size = d;
    

    DM.A = new int[DM.size * (DM.size + 1) / 2];

    cout << "ENTER ALL ELEMENTS" << endl;

    for(int i = 1; i <= DM.size; i++){
        for(int j = 1; j <= DM.size; j++){
            cin >> x;
            Set_UpT_Matrix(&DM,i,j,x);
        }
    }

    cout << "YOUR UPPER TRIANGULAR MATRIX" << endl;

    cout << endl;

    Display(DM);

    delete [ ]DM.A;

    return 0;
}