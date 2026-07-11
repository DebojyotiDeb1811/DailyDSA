#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};

void vowel_count(struct strings c){

    char Y[10] = { 'A' , 'E' , 'I' , 'O' , 'U' , 'a' , 'e' , 'i' , 'o' , 'u'};

    int vcount = 0;
    int ccount = 0;
   
    for(int i = 0; i < c.size; i++){
       bool is_vowel = false; 
       
       for(int j = 0; j < 10; j++){ 
           if(c.X[i] == Y[j]){
              is_vowel = true;
              break; 
           }
       }

       if(is_vowel == true){
           vcount++;
       } 
       else{
           ccount++;
       }
    }

    cout << "NO. OF VOWELS IN STRING IS " << vcount << endl;
    cout << "NO. OF CONSONANTS IN STRING IS " << ccount << endl;
}

void word_count(struct strings c){

    int wcount = 0;

    for(int i = 0; i < c.size; i++){
       if(c.X[i] == ' '){
          wcount++;
       }
    }

    wcount += 1;

    cout << "NO. OF WORDS IN THE STRING IS " << wcount << endl;

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

    display(chars1);

    vowel_count(chars1);

    word_count(chars1);

}