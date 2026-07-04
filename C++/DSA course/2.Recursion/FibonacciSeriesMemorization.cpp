#include <iostream>
using namespace std;

int F[10] = {-1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1};

int Fibo( int n){

    if( n <= 1){
       F[n] = n;
       return n;
    }

    else{

        if( F[n-2] == -1 ){
            F[n-2] = Fibo(n-2);
        }

        if( F[n-1] == -1 ){
            F[n-1] = Fibo(n-1);
        }
        return F[n-2] + F[n-1];
    }
}

int main(){
    int result;
    result = Fibo(6);
    cout << result;
}