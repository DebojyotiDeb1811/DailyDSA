#include <iostream>
using namespace std;

void fun(int A[ ] , int n ){

    A[4] = 9;
    for (size_t i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
}

int main(){

    int A[5] = {2,4,6,8,10};

    fun(A,3);

    for(int x:A){
        cout << x << endl;
    }
}