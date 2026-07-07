#include <iostream>
using namespace std;

struct array{

    int A[10];
    int size;

};

void get(struct array a, int index){
    if(index >= 0 && index < a.size){
        cout << "ELEMENT AT INDEX " << index << " " << a.A[index] << endl;
    }

    else{
        cout << "ENTER VALID INDEX " << endl;
    }
}

void set(struct array *a, int index , int x){
    if(index >= 0 && index < a->size){
        a->A[index] = x;
        cout << "ELEMENT REPLACED AT INDEX " << index << " " << a->A[index] << endl;
    }

    else{
        cout << "ENTER VALID INDEX " << endl;
    }
}

void max(struct array a){
    int max = a.A[0];

    for(int i = 0; i < a.size; i++)
      if(a.A[i] > max){
         max = a.A[i];
    }
    cout << "MAX ELEMENT IN ARRAY " << max << endl;
}

void min(struct array a){
    int min = a.A[0];

    for(int i = 0; i < a.size; i++)
      if(a.A[i] < min){
         min = a.A[i];
    }
    cout << "MIN ELEMENT IN ARRAY " << min << endl;
}

void sum(struct array a){
    int total = 0;
    for(int i = 0; i < a.size; i++){
         total = total + a.A[i];
    }
    cout << "TOTAL OF ELEMENTS IN ARRAY " << total << endl;
}

void avg(struct array a){
    int total = 0;
    int avg = 0;
    for(int i = 0; i < a.size; i++){
         total = total + a.A[i];
    }
    avg = total / a.size;
    cout << "AVG OF ELEMENTS IN ARRAY " << avg << endl;
}

void display(struct array a){

   for(int i = 0 ; i < a.size ; i++){
      cout << a.A[i] << "\t";
   }   
}

int main(){

    struct array arr = {{0, 2, 4, 6, 10, 12, 14, 16, 18, 20}, 10};
    get(arr, 3);
    max(arr);
    min(arr);
    sum(arr);
    avg(arr);

    set(&arr, 0 , 1);
    display(arr);

}