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

    for(int k = 0; k < s->nznum; k++){

      cin >> s->E[k].i >> s->E[k].j >> s->E[k].value;

    }

    return s;
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

SparseMatrix *AdditionMatrix(struct SparseMatrix *s1 , struct SparseMatrix *s2){

    SparseMatrix *s3 = new SparseMatrix;
    s3->row = s1->row;
    s3->column = s1->column;
    s3->E = new Element[s1->nznum + s2->nznum];

    int i = 0, j = 0, k = 0;

    while(i < s1->nznum && j < s2->nznum){

       if(s1->E[i].i == s2->E[j].i && s1->E[i].j == s2->E[j].j){
          s3->E[k].i = s1->E[i].i;
          s3->E[k].j = s1->E[i].j;
          s3->E[k].value = s1->E[i].value + s2->E[j].value;
          i++;
          j++;
          k++;
       }

       else if(s1->E[i].i == s2->E[j].i && s1->E[i].j != s2->E[j].j){

         if(s1->E[i].j < s2->E[j].j){
          s3->E[k].i = s1->E[i].i;
          s3->E[k].j = s1->E[i].j;
          s3->E[k].value = s1->E[i].value;
          i++;
          k++;
         }

         else {
          s3->E[k].i = s2->E[j].i;
          s3->E[k].j = s2->E[j].j;
          s3->E[k].value = s2->E[j].value;
          j++;
          k++;
         }
          
       }

       else if(s1->E[i].i != s2->E[j].i){

        if(s1->E[i].i < s2->E[j].i){
          s3->E[k].i = s1->E[i].i;
          s3->E[k].j = s1->E[i].j;
          s3->E[k].value = s1->E[i].value;
          i++;
          k++;
        }

        else{
          s3->E[k].i = s2->E[j].i;
          s3->E[k].j = s2->E[j].j;
          s3->E[k].value = s2->E[j].value;
          j++;
          k++;
       }

       }
    }

    while(i < s1->nznum) {
        s3->E[k++] = s1->E[i++];
    }

    while(j < s2->nznum) {
        s3->E[k++] = s2->E[j++];
    }

    s3->nznum = k;

    return s3;
}

void freeSparseMatrix(SparseMatrix *s) {

    if (s != nullptr) {

        delete[] s->E;
        delete s;

    }

} 

int main(){

    int ROW , COLUMN , NZNUM1, NZNUM2; 

    cout << "ENTER DIMENSIONS : ";
    cin >> ROW >> COLUMN;

    cout << "ENTER NON ZERO ELEMENTS FOR MATRIX 1: ";
    cin >> NZNUM1;

    cout << "ENTER NON ZERO ELEMENTS FOR MATRIX 2: ";
    cin >> NZNUM2;

    SparseMatrix *myMatrix1 = CreateSparseMatrix(ROW,COLUMN,NZNUM1);
    SparseMatrix *myMatrix2 = CreateSparseMatrix(ROW,COLUMN,NZNUM2);
    SparseMatrix *myMatrix3 = AdditionMatrix(myMatrix1,myMatrix2);
    
    DisplaySparseMatrix(myMatrix3);

    freeSparseMatrix(myMatrix1);
    freeSparseMatrix(myMatrix2);
    freeSparseMatrix(myMatrix3);
    
}