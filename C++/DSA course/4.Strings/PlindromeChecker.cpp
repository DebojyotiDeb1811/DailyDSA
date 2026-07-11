#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};


void palindrome_check(struct strings *c){

    char Y[c->size];

    for(int i = c->size - 1 , j = 0; i > -1; i-- , j++){
       Y[j] = c->X[i];
    }

    bool checker = true;

    for(int i = 0; i < c->size; i++){
      if(Y[i] != c->X[i]){
       checker = false;
       break;
    }
  }

  if(checker == true){
     cout << "STRING IS A PALINDROME";
  }

  else{
     cout << "STRING IS NOT A PALINDROME";
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
    struct strings chars2 = {"MOM",3};

    display(chars1);
    palindrome_check(&chars1);

    cout << endl;
    cout << endl;
    
    display(chars2);
    palindrome_check(&chars2);

}