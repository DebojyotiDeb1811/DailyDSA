#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};


void reverse_string(struct strings *c){

    char Y[c->size];

    for(int i = c->size - 1 , j = 0; i > -1; i-- , j++){
       Y[j] = c->X[i];
    }

    cout << "REVERSED STRING" << endl;

    for(int i = 0; i < c->size; i++){
        cout << Y[i];
    }
}

void display(struct strings c){

   for(int i = 0 ; i < c.size ; i++){
      cout << c.X[i] ;
   }   

   cout << endl;
}



int main(){
    
    struct strings chars1 = {{'w' , 'E' , 'L' , 'C' , 'o' , 'M' , 'E' , '\0'},7};
    struct strings chars2 = {"JoY",3};

    display(chars1);

    reverse_string(&chars1);

}