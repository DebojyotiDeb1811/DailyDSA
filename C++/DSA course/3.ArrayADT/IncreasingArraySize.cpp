#include <iostream>
using namespace std;

int main(){

   int *p = new int[5];
   int *q = new int[10];

   for(int i = 0 ; i <= 4 ; i++){
      p[i] = i;
   }
   
   cout << "ELEMENTS OF P" << endl;

   for(int i = 0 ; i <= 4 ; i++){
      cout << p[i] << "\t";
   }

   cout << endl;
   cout << endl;

   for(int j = 0 ; j <= 9 ; j++){
      q[j] = p[j];
   }
   
   cout << "ELEMENTS OF Q" << endl;

   for(int i = 0 ; i <= 9 ; i++){
      
      cout << q[i] << "\t";
   }

   cout << endl;
    
   delete[] p;
   p = q;
   q = nullptr;
}