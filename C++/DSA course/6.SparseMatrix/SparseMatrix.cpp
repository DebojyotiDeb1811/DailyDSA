#include <iostream>
using namespace std;

struct Element{
   
    int i;
    int j;
    int value;

};

struct SparseMatrix{

    int row;
    int column;
    int nznum;
    struct Element *E;

};

void CreateSparseMatrix(struct SparseMatrix *S){

    cout << "ENTER DIMENSIONS : ";
    cin >> S->row >> S->column;

    cout << "ENTER NON ZERO ELEMENTS : ";
    cin >> S->nznum;

    S->E = new Element[S->nznum];

    cout << "ENTER THE ELEMENTS (row column value):\n";

    for(int k = 0; k < S->nznum; k++){

      cin >> S->E[k].i >> S->E[k].j >> S->E[k].value;

    }

}

void DisplaySparseMatrix(struct SparseMatrix S) {

    cout << "YOUR MATRIX" << endl;

    int k = 0;

    for(int i = 1; i <= S.row; i++) {
        
        for(int j = 1; j <= S.column; j++) {
            
            if (k < S.nznum && i == S.E[k].i && j == S.E[k].j) {
                cout << S.E[k].value << "\t";
                k++;
            } 

            else {
                cout << "0 " << "\t";
            }
        }

        cout << endl;
   }
}

int main(){

    SparseMatrix myMatrix;

    CreateSparseMatrix(&myMatrix);

    DisplaySparseMatrix(myMatrix);

    delete[] myMatrix.E;
    myMatrix.E = nullptr;

}