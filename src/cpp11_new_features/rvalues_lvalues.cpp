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

Test getTest(){
    return Test();
}

int main(){
    Test test1 = getTest();

//    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    // Rvalues  -> right values
    // L values -> leftf values
    int value1 = 7; // rvalue - value 1, lvalue 7

    int *pValue1 = &value1;
    //int *pVlue = &7; // 7 is an rvalue so we cannot take its address

    Test *pTest1 = &test1;
    // rvalues are temporaries, so we cannot take its address
    // Test *pTest2 = &getTest();

    int *pValue3 = &++value1;
    cout << *pValue3 << endl;

    //int *pValue4 = &value1++; // this gives an error because there is a temporary value here
    // the posfix operator needs to use the value afterwards it is incremented, so it
    // creates a temporary copy of the value so that the actual origial value can be used.


    return 0;
}
