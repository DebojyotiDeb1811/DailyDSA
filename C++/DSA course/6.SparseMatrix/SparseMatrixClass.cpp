#include <iostream>
using namespace std;

struct Element {
    int i;
    int j;
    int value;
};

class SparseMatrix {

    private :

      int row;
      int column;
      int nznum;
      struct Element *E;

    public :
      
      SparseMatrix(int ROW, int COLUMN, int NZNUM){

         row = ROW;
         column = COLUMN;
         nznum = NZNUM;
         E = new Element[nznum];
      }

      ~SparseMatrix(){
        delete[] E;
      }

      void CreateSparseMatrix(){

           for(int i = 0; i < nznum; i++){
              cin >> E[i].i >> E[i].j >> E[i].value;
           }
      }

      void Display(){

        cout << "YOUR MATRIX" << endl;

        int k = 0;

        for(int i = 1; i <= row; i++) {
        
          for(int j = 1; j <= column; j++) {
            
            if (k < nznum && i == E[k].i && j == E[k].j) {
                cout << E[k].value << "\t";
                k++;
            } 

            else {
                cout << "0 " << "\t";
            }
        }

            cout << endl;
          }
      }

    SparseMatrix *AdditionMatrix(SparseMatrix& s2){

    SparseMatrix *s3 = new SparseMatrix(row, column, nznum + s2.nznum);

    int i = 0, j = 0, k = 0;

    while(i < nznum && j < s2.nznum){

       if(E[i].i == s2.E[j].i && E[i].j == s2.E[j].j) {
                s3->E[k].i = E[i].i;
                s3->E[k].j = E[i].j;
                s3->E[k].value = E[i].value + s2.E[j].value;
                i++; j++; k++;
            }
            else if(E[i].i == s2.E[j].i && E[i].j != s2.E[j].j) {
                if(E[i].j < s2.E[j].j) {
                    s3->E[k].i = E[i].i;
                    s3->E[k].j = E[i].j;
                    s3->E[k].value = E[i].value;
                    i++; k++;
                } else {
                    s3->E[k].i = s2.E[j].i;
                    s3->E[k].j = s2.E[j].j;
                    s3->E[k].value = s2.E[j].value;
                    j++; k++;
                }
            }
            else if(E[i].i != s2.E[j].i) {
                if(E[i].i < s2.E[j].i) {
                    s3->E[k].i = E[i].i;
                    s3->E[k].j = E[i].j;
                    s3->E[k].value = E[i].value;
                    i++; k++;
                } else {
                    s3->E[k].i = s2.E[j].i;
                    s3->E[k].j = s2.E[j].j;
                    s3->E[k].value = s2.E[j].value;
                    j++; k++;
                }
              }
            }

    while(i < nznum) {
        s3->E[k++] = E[i++];
    }

    while(j < s2.nznum) {
        s3->E[k++] = s2.E[j++];
    }

    s3->nznum = k;

    return s3;
   }
};

int main(){

    int ROW , COLUMN , NZNUM1, NZNUM2; 

    cout << "ENTER DIMENSIONS : ";
    cin >> ROW >> COLUMN;

    cout << "ENTER NON ZERO ELEMENTS FOR MATRIX 1: ";
    cin >> NZNUM1;

    cout << "ENTER NON ZERO ELEMENTS FOR MATRIX 2: ";
    cin >> NZNUM2;

    SparseMatrix MyMatrix1 = SparseMatrix(ROW,COLUMN,NZNUM1);
    SparseMatrix MyMatrix2 = SparseMatrix(ROW,COLUMN,NZNUM2);


    MyMatrix1.CreateSparseMatrix();
    MyMatrix2.CreateSparseMatrix();

    SparseMatrix *MyMatrix3 = MyMatrix1.AdditionMatrix(MyMatrix2);

    MyMatrix3->Display();

    delete MyMatrix3;

    return 0;
}