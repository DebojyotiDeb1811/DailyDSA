#include <iostream>
using namespace std;


template<class T>
class arithmetic {

    private:

    T a;
    T b;

    public:
      arithmetic(T a, T b);
      T add();
      T sub();
      T c;
};

template <class T>
 arithmetic<T>::arithmetic(T a , T b){
        this->a = a;
        this->b = b;
    }

template <class T>
    T arithmetic<T>::add(){
        c = a + b;
        cout << c << endl;
    }
    
template <class T>
    T arithmetic<T>::sub(){
        c = a - b;
        cout << c << endl; 
    }


int main(){

    arithmetic<int> ar(2,3);

    ar.add();
    ar.sub();

    return 0;
}

