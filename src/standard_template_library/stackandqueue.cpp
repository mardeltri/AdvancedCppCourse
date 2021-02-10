// stackandqueue.cpp : Creating stacks and queue
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test{
private:
    string name;

public:
    Test(string name): name(name){

    }
    ~Test(){
//        cout << "Object destroyed"<<endl;
    }

    void print() {
        cout << name << endl;
    }
};

int main(){
    // Last in first out
    stack<Test> testStack;

    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));
    cout<<endl;

    // Invalid code! Object is destroyed
    Test &test1 = testStack.top();
    test1.print();
    testStack.pop(); // Reference refers to destroyed objects

    while (testStack.size()>0) {
        Test &test1 = testStack.top();
        test1.print();
        testStack.pop();
    }

    cout<<endl;
    // First in first out
    queue<Test> testQueue;

    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Sue"));

    cout<<endl;

    testQueue.back().print();

    cout<<endl;

    while (testQueue.size()>0) {
        Test &test1 = testQueue.front();
        test1.print();
        testQueue.pop();
    }

    return 0;
}
