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

SparseMatrix *CreateSparseMatrix(int row, int column, int nznum){

    SparseMatrix *s = new SparseMatrix;
    
    s->row = row;
    s->column = column;
    s->nznum = nznum;
    
    
    s->E = new Element[s->nznum]; 
    
    return s;

    for(int k = 0; k < s->nznum; k++){

      cin >> s->E[k].i >> s->E[k].j >> s->E[k].value;

    }

}

void DisplaySparseMatrix(struct SparseMatrix *S) {

    cout << "YOUR MATRIX" << endl;

    int k = 0;

    for(int i = 1; i <= S->row; i++) {
        
        for(int j = 1; j <= S->column; j++) {
            
            if (k < S->nznum && i == S->E[k].i && j == S->E[k].j) {
                cout << S->E[k].value << "\t";
                k++;
            } 

            else {
                cout << "0 " << "\t";
            }
        }

        cout << endl;
   }
}

void freeSparseMatrix(SparseMatrix *s) {

    if (s != nullptr) {

        delete[] s->E;
        delete s;

    }

} 

int main(){

    int ROW , COLUMN , NZNUM; 

    cout << "ENTER DIMENSIONS : ";
    cin >> ROW >> COLUMN;

    cout << "ENTER NON ZERO ELEMENTS : ";
    cin >> NZNUM;

    SparseMatrix *myMatrix = CreateSparseMatrix(ROW,COLUMN,NZNUM);

    DisplaySparseMatrix(myMatrix);

    freeSparseMatrix(myMatrix);

}