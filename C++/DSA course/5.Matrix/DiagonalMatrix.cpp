#include <iostream>
using namespace std;

struct Matrix {
    int A[10];
    int size;
};

void Set_Diagonal_Matrix(struct Matrix *M, int i, int j, int x) {

    if (i == j) {
        M->A[i - 1] = x;
    }
    
}

int Get_Diagonal_Matrix(struct Matrix M, int i, int j) {

    if (i == j) {
        return M.A[i - 1];
    } else {
        return 0;
    }
}

void Display(struct Matrix M) {
    
    for (int i = 1; i <= M.size; i++) {
        
        for (int j = 1; j <= M.size; j++) {
            if (i == j) {
                cout << M.A[i - 1] << "\t";
            } else {
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }
}

int main() {
    struct Matrix DM;
    DM.size = 4;

    Set_Diagonal_Matrix(&DM, 1, 1, 4);
    Set_Diagonal_Matrix(&DM, 2, 2, 6);
    Set_Diagonal_Matrix(&DM, 3, 3, 8);
    Set_Diagonal_Matrix(&DM, 4, 4, 10);

    Display(DM);

    return 0;
}