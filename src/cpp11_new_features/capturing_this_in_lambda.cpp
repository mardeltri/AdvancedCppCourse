#include <iostream>
#include <vector>
using namespace std;


class Test {
private:
    int one{1};
    int two{2};

public:
    void run(){
        int three{3};
        int four{4};
        // Variables cannot be passed. Next commented line doesn't compiles
        // auto pLambda = [one, three, four](){
        // Next line works, it pases this to access its members
        //auto pLambda = [this, three, four](){
        // Next line works, pass all by reference and this class
        auto pLambda = [&, this](){
            one = 111;
            cout << one << endl;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }

};

int main(){
    Test test;
    test.run();

    return 0;
}
