#include <iostream>
using namespace std;

struct rectangle {

    int length;
    int breadth;

};

void fun(struct rectangle &r){
     
    r.length = 7;
    r.breadth = 8;

    cout << r.length << endl;
    cout << r.breadth << endl;
}

int main(){

    struct rectangle r = {10,5};
    fun(r);
    cout << r.length << endl;
    cout << r.breadth << endl;
}