#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Parent{
private:
    int one;
public:
    Parent(): one(0){

    }
    Parent(const Parent &other): one(0){
        one = other.one;
        cout << "copy parent" << endl;
    }

    virtual void print(){
        cout << "parent" << endl;
    }

    virtual ~Parent(){

    }
};

class Child : public Parent {
private:
    int id;

public:
    Child(): id(0){

    }
    Child(int id): id(id){

    }
    int Id(){return id;}
    void print(){
        cout << "child" << endl;
    }
    bool operator==(const Child& rhs) const { return this->id == rhs.id;}
    bool operator==(Parent* rhs) const {
        cout << "operator==(Parent* rhs)" << endl;
        Child *pbb = dynamic_cast<Child *>(rhs);
        return this->id == pbb->id;
    }
    bool operator==(Child* rhs) const {
        cout << "operator==(Parent* rhs)" << endl;
        Child *pbb = dynamic_cast<Child *>(rhs);
        return this->id == pbb->id;
    }
};

int main(){
    Child c1;
    std::vector<Parent*> myvector;
    myvector.push_back(new Child(1));
    myvector.push_back(new Child(2));
    Parent* otherchild0 = new Child(2);
    std::cout << otherchild0->Id()<< std::endl;
    Child otherchild1(2);
    Child otherchild2(2);
    if (otherchild1 == otherchild2)
        std::cout << "Equals"<< std::endl;

    if (otherchild1 == myvector.at(1))
        std::cout << "Equals"<< std::endl;

    auto it = std::find(myvector.begin(), myvector.end(), otherchild0);
    if (it == myvector.end())
        std::cout << "Not found"<< std::endl;
    else
        std::cout << "Found"<< std::endl;

}
