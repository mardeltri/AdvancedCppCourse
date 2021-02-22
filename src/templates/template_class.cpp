// Implementation and definition must be together
// Common use: store values
#include <iostream>
using namespace std;

template<class T, class K>
class Test{
private:
    T obj;
public:
    Test(T obj){
        this->obj = obj;
    }
    void print(){
        cout << obj << endl;
    }
};

int main(){
    // Like vectors
    Test<string, int> test1("Hello1");
    test1.print();

    Test<int, int> test2(1);
    test2.print();
    return 0;
}
