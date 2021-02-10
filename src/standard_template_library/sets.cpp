// vectors.cpp : Creating vectors
#include <iostream>
#include <set>
using namespace std;

class Test{
    int id;
    string name;
public:
    Test():id(0), name(""){}
    Test(int id, string name): id(id), name(name){

    }
    void print() const{
        cout <<  id << ":" << name << endl;
    }
    bool operator<(const Test &other) const {
        return id<other.id;
    }
};

int main(){
    set<float> numbers;
    numbers.insert(1.0);
    numbers.insert(2.0);
    numbers.insert(2.0);
    numbers.insert(3.0);

    for(set<float>::iterator it = numbers.begin(); it != numbers.end(); ++it){
        cout<<*it<<endl;
    }
    auto it = numbers.find(2);
    if (it!=numbers.end())
        cout<<"Found: "<<*it<<endl;

    if(numbers.count(1.0)){
        cout << "Number found."<< endl;
    }

    set<Test> tests;
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(30, "Joe"));
    tests.insert(Test(20, "Sue"));

    for(set<Test>::iterator it = tests.begin(); it != tests.end(); ++it){
        it->print();
    }
    return 0;
}
