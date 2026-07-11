#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};

void duplicate_counter(struct strings c){

    int H[256] = {0};

    bool check = false;

    for(int i = 0 ; c.X[i] != '\0' ; i++){
      if(c.X[i] >= 97 && c.X[i]<= 122){
         c.X[i] -= 32;
      }
      H[c.X[i]]++;
    }

    for(int i = 0; i < 256; i++){
      if(H[i] > 1){
         cout << "ALPHABET " << (char)(i) << " REPEATS FOR " << H[i] << " TIMES" << endl;
         check = true;
      }
    }

    if(check == false){
      cout << "NO REPEATING ALPHABET";
    }

}

void display(struct strings c){

   for(int i = 0 ; i < c.size ; i++){
      cout << c.X[i] << "\t";
   }   

   cout << endl;
}

int main(){
    
    struct strings chars1 = {{'W' , 'e' , 'L' , 'C' , 'O' , 'M' , 'E' , '\0'},7};
    struct strings chars2 = {"JoY",3};

    display(chars1);
    cout << endl;
    duplicate_counter(chars1);

}