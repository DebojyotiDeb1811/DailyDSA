#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};


void string_check(struct strings c){

    bool check = true;

    for(int i = 0; c.X[i] != '\0'; i++){
       if((!(c.X[i] >= 65 && c.X[i] <= 90)) && (!(c.X[i] >= 97 && c.X[i] <= 122))){
          cout << "STRING NOT VALID";
          check = false;
          break;
       }
    }

    if(check == true){
          cout << "STRING IS VALID";
    }

}

void display(struct strings c){

   for(int i = 0 ; i < c.size ; i++){
      cout << c.X[i] << "\t";
   }   

   cout << endl;
}



int main(){
    
    struct strings chars1 = {{'w' , 'E' , 'L' , '?' , 'o' , 'M' , 'E' , '\0'},7};
    struct strings chars2 = {"JoY",3};

    display(chars1);
    string_check(chars1);

}