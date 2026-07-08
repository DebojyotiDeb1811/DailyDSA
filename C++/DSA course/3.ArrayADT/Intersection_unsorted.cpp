#include <iostream>
using namespace std;

struct array {
    int A[20];
    int size;
};

void display(struct array c){
    for(int i = 0 ; i < c.size ; i++) cout << c.A[i] << "\t";
    cout << endl;
}

void intersection_unsorted(struct array a, struct array b, struct array *c){

    int k = 0;

    for(int j = 0; j < b.size; j++){

        for(int i = 0; i < a.size; i++){

            if(b.A[j] == a.A[i]){
               c->A[k++]=b.A[j];
               break;
            }
        }
    }

}

int main(){
    struct array arr1 = {{5, 2, 8, 0, 4} , 5}; 
    struct array arr2 = {{9, 2, 5, 1, 7} , 5};
    struct array arr3 = {{} , 10};

    intersection_unsorted(arr1, arr2, &arr3);

    cout << "MODIFIED ARRAY (UNSORTED INTERSECTION):" << endl;
    display(arr3);

    return 0;
}