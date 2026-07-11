#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};

void anagram_checker(struct strings a , struct strings b){

    int H[256] = {0};

    for(int i = 0; i < a.size; i++){
       if(a.X[i] >= 97 && a.X[i] <= 122){
         a.X[i] -= 32;
       }
    }

    for(int i = 0; i < b.size; i++){
       if(b.X[i] >= 97 && b.X[i] <= 122){
         b.X[i] -= 32;
       }
    }

    for(int i = 0; i < a.size; i++){
        H[a.X[i]]++;
    }

    for(int i = 0; i < b.size; i++){
        H[b.X[i]]--;
    }

    bool check = true;

    for(int i = 0; i < 256; i++){
      if(H[i] != 0){
        check = false;
      }
    }

    if(check){
      cout << "STRING IS ANAGRAM";
    }

    else{
      cout << "STRING IS NOT ANAGRAM";  
    }

}

void display(struct strings c){

   for(int i = 0 ; i < c.size ; i++){
      cout << c.X[i] << "\t";
   }   

   cout << endl;
}

int main(){
    
    struct strings chars1 = {"DECIMAL",7};
    struct strings chars2 = {"MEDICAM",7};

    display(chars1);
    cout << endl;
    display(chars2);
    cout << endl;
    anagram_checker(chars1 , chars2);
}