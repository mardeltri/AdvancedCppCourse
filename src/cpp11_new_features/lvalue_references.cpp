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

void testString(string &test){
    cout << test << endl;
}

void testString(string &&test){
    testString(test);
}


int main(){
    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    // L value references are binded to l values;
    Test &rTest1 = test1;

    // Next line doesnt work because rvalues cannot be assigned to l value references
    //Test &rTest2 = getTest();

    const Test &rTest2 = getTest();

    Test test2(Test(1));

    testString("Hola");
    string mystring = "Holi";
    testString(mystring);


    return 0;
}
