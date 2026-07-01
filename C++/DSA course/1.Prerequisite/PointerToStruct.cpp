#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


int main(){

    struct rectangle R = {10,5};
    struct rectangle *ptr;
    ptr = &R;

    cout << R.length << endl;
    cout << "" << endl;
    cout << "" << endl;
    R.length = 11;

    cout << R.length << endl;

    ptr->length = 20;
    cout << ""<< endl;
    cout << ""<< endl;
    cout << R.length << endl;





}