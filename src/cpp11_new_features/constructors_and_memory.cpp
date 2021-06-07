#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    static const int SIZE=100;
    int * _pBuffer;
public:
    Test(){
        cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{};
        // Initialicing array to zero
        //memset(_pBuffer, 0, sizeof (int)*SIZE); // Set bytes to zero
    }

    Test(int i){
        cout << "parameterized constructor" << endl;
        _pBuffer = new int[SIZE]{};
        for (int i=0; i<SIZE; i++){
            _pBuffer[i] = 7*i;
        }
    }

    Test(const Test &other){
        cout << "copy constructor" << endl;
        _pBuffer = new int[SIZE]{};

    }

    Test &operator=(const Test &other){
        cout << "assignment" << endl;
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        return *this;
    }
    ~Test(){
        cout << "destructor" << endl;
        delete [] _pBuffer;
    }

    friend ostream &operator<<(ostream &out, const Test &test);
};

int main(){
    Test test;

    return 0;
}
