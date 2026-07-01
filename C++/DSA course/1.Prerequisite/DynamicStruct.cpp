#include <iostream>
using namespace std;

struct rectangle {

    int length;
    int breadth;

};

struct rectangle * fun(){

    struct rectangle *p;
    p = new rectangle;

    p->length = 10;
    p->breadth = 8;

    return p;
}

int main(){

    struct rectangle *ptr = fun();

    cout << ptr->breadth << endl;
    cout << ptr->length << endl;
}