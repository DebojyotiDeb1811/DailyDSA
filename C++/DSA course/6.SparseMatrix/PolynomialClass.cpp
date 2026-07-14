#include <iostream>
using namespace std;

struct Term{

    int coefficient;
    int exponent;

};

class Polynomial{

    private :

    int nznum;

    public :

    struct Term *T;

    Polynomial(int N){
        nznum = N;
        T = new Term[nznum];
    }

    ~Polynomial(){
        delete[] T;
    }

    void CreatePolynomial(){

        cout << "ENTER COEFFICIENTS AND EXPONENTS";

        for(int i = 0; i < nznum; i++){
            cin >> T[i].coefficient >> T[i].exponent;
        }
    }

    void display(){

        for(int i = 0; i < nznum; i++){

            cout << T[i].coefficient << "x^" << T[i].exponent;

             if (i < nznum - 1) {
            cout << " + ";
          }
        }
        cout << endl;
    }

    void Evaluation(){

        int Totalsum = 0;
        int x;

        cout << "ENTER EXPONENT VALUE :";
        cin >> x;

        for(int i = 0; i < nznum; i++){

            int power = 1;

            for(int j = 0; j < T[i].exponent; j++){
               power = power * x;
            }

            Totalsum = T[i].coefficient * power;
        }
        cout << "ANSWER OF POLYNOMIAL FOR X " << x << Totalsum;
    }

    Polynomial* Addition(Polynomial *P) {
        
        Polynomial *PM3 = new Polynomial(nznum + P->nznum);

        int i = 0; 
        int j = 0; 
        int k = 0; 

        while (i < nznum && j < P->nznum) {
            

            if (T[i].exponent > P->T[j].exponent) {
                PM3->T[k] = T[i];
                i++;
                k++;
            } 

            else if (T[i].exponent < P->T[j].exponent) {
                PM3->T[k] = P->T[j];
                j++;
                k++;
            } 

            else {
                PM3->T[k].exponent = T[i].exponent;
                PM3->T[k].coefficient = T[i].coefficient + P->T[j].coefficient;
                i++;
                j++;
                k++;
            }
        }

        while (i < nznum) {
            PM3->T[k] = T[i];
            i++;
            k++;
        }

        while (j < P->nznum) {
            PM3->T[k] = P->T[j];
            j++;
            k++;
        }

        PM3->nznum = k; 

        return PM3;
    }
};

int main(){

    int NZNUM1;
    cout << "ENTER NON ZERO ELEMENTS : ";
    cin >> NZNUM1;

    int NZNUM2;
    cout << "ENTER NON ZERO ELEMENTS : ";
    cin >> NZNUM2;

    Polynomial PM1 = Polynomial(NZNUM1);
    Polynomial PM2 = Polynomial(NZNUM2);

    PM1.CreatePolynomial();
    PM2.CreatePolynomial();

    Polynomial *PM3 = PM1.Addition(&PM2);

    PM1.display();
    PM3->display();

    delete PM3;
}