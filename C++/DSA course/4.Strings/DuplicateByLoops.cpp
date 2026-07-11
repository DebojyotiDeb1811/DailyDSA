#include <iostream>
using namespace std;

struct strings{
    char X[9];
    int size;
};

void duplicate_counter(struct strings c){

    bool check = false;

    for(int i = 0; i < c.size - 1; i++){
       
        int count = 1;

        for(int j = i + 1; j < c.size; j++){
            if(c.X[i] == c.X[j]){
              count++;
              check = true;
            }
        }

        if(count > 1){
           cout << "ALPHABET " << c.X[i] << " REPEATS FOR " << count << " TIMES" << endl;
        }
    }

    if(check == false){
       cout << "NO ALPHABET IS REPEATING";
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

    display(chars1);
    cout << endl;
    cout << endl;
    duplicate_counter(chars1);

}