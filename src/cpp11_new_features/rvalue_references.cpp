#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    static const int SIZE=100;
    int * _pBuffer{nullptr};
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

ostream &operator<<(ostream &out, const Test &test){
    out << "Hello from test";
    return out;
}

Test getTest(){
    return Test();
}

void check(const Test &value){
    cout << "lValue function!" << endl;
}

void check(Test &&value){
    cout << "rValue function!" << endl;
}


int main(){
    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    Test &ltest1 = test1;
    Test &&rtest1 = getTest();

    check(test1);
    check(getTest());
    check(Test());
    return 0;
}
