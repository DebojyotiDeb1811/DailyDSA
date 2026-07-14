#include <iostream>
using namespace std;

struct Term {
    int coefficient;
    int exponent;
};

struct Polynomial {
    int nznum;
    struct Term *T;
};

Polynomial* CreatePolynomial(int NZNUM) {
    Polynomial *P = new Polynomial;

    P->nznum = NZNUM;
    P->T = new Term[P->nznum];

    cout << "Enter coefficient and exponent for each term:" << endl;
    for(int i = 0; i < P->nznum; i++){
       cin >> P->T[i].coefficient >> P->T[i].exponent;
    }

    return P;
}

void DisplayPolynomial(struct Polynomial *P) {
    cout << "YOUR POLYNOMIAL: " << endl;

    for(int i = 0; i < P->nznum; i++) {
        cout << P->T[i].coefficient << "x^" << P->T[i].exponent;
        
        if (i < P->nznum - 1) {
            cout << " + ";
        }
    }
    cout << endl;
}

int main(){
    int NZNUM;

    cout << "ENTER NUMBER OF NON-ZERO TERMS: ";
    cin >> NZNUM;

    Polynomial *PM = CreatePolynomial(NZNUM);
    
    DisplayPolynomial(PM);
    
    delete[] PM->T;
    delete PM;

}