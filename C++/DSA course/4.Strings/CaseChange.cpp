#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};

void lower_case(struct strings *c){
   
    for(int i = 0; i < c->size; i++){
       if(c->X[i] >= 65 && c->X[i] <= 90){
         c->X[i] += 32;  
       }
    }
}

void upper_case(struct strings *c){

    for(int i = 0; i < c->size; i++){
       if(c->X[i] >= 97 && c->X[i] <= 122){
         c->X[i] -= 32;  
       }
    }  
}

void display(struct strings c){

   for(int i = 0 ; i < c.size ; i++){
      cout << c.X[i] << "\t";
   }   

   cout << endl;
}



int main(){
    
    struct strings chars1 = {{'w' , 'E' , 'L' , 'c' , 'o' , 'M' , 'E' , '\0'},7};
    struct strings chars2 = {"JoY",3};

    upper_case(&chars1);

    display(chars1);

    lower_case(&chars1);

    display(chars1);

}