#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};

void length(struct strings c){

    int length = 0;
    
    for(int i = 0; c.X[i] != '\0' ; i++){
         length++;
    }

    cout << "LENGTH OF THE STRING IS " << length << endl;
}

int main(){
    
    struct strings chars1 = {{'W' , 'E' , 'L' , 'C' , 'O' , 'M' , 'E' , '\0'},10};
    struct strings chars2 = {"JOY",10};
    length(chars1);
    length(chars2);
}