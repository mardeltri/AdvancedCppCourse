#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
    Test(){
        cout << "Test()"<< endl;
    }

    Test(int id){
        cout << "Test(int)"<< endl;
    }

    Test(int id, int model_id): Test(), Test(id){
        cout << "Test(int, int)"<< endl;
    }
};

template<typename T>
void call(T &&arg){
    check(forward<T>(arg));
}
void check(Test &test){
    cout << "lValue" << endl;
}

void check(Test &&test){
    cout << "rValue" << endl;
}

int main(){
    Test test;

    auto &&t = test;
    call(t);

    call(Test());

    return 0;
}
