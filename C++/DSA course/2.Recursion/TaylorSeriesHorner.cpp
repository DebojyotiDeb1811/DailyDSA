#include <iostream>
using namespace std;

double taylor( double x , int n){

    double r = 1;

    for(; n > 0 ; n--){
        
      r =  1 + (x/n) * r;

    }

    return r;
}

int main(){

    double result;
    result = taylor( 1 , 10);

    cout << result;

}