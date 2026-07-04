#include <iostream> 
using namespace std;

int Fact(int n){

    if( n ==  0 ){
      return 1;
    }

    else{
     return Fact(n-1) * n;
    }
}

int main(){
    int r;
    r = Fact(10);
    cout << r;
    return 0;
}