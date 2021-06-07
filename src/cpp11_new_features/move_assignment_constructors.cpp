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
//        cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{};
        // Initialicing array to zero
        //memset(_pBuffer, 0, sizeof (int)*SIZE); // Set bytes to zero
    }

    Test(int i){
        cout << "Parameterized constructor" << endl;
        _pBuffer = new int[SIZE]{};
        for (int i=0; i<SIZE; i++){
            _pBuffer[i] = 7*i;
        }
    }

    Test(const Test &other){
        cout << "Copy constructor" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
    }

    Test(Test &&other){
        cout << "Move constructor" << endl;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
    }
    Test &operator=(const Test &other){
        cout << "Assignment" << endl;
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        return *this;
    }

    Test &operator=(Test &&other){
        cout << "Move assignment" << endl;
        delete[] _pBuffer;
        _pBuffer = other._pBuffer;
        other._pBuffer=nullptr;
        return *this;
    }

    ~Test(){
//        cout << "Destructor" << endl;
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

void testString(string &test){
    cout << test << endl;
}

void testString(string &&test){
    testString(test);
}


int main(){
    vector<Test> vec;
    vec.push_back(Test());

    Test test;
    test = getTest();
    return 0;
}
