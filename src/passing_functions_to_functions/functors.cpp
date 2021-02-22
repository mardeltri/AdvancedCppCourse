#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Alternative to function pointers
// Struct -> methods and variables public by default
// Class -> methods and variables private by default

//This is a functor: a class o struct that overloads
// the brackets operator


struct Test {
    virtual bool operator()(string &text)=0;
};

struct MatchTest : public Test {
    virtual bool operator()(string &text){
        return text == "lion";
    }
};

void check(string text, Test &test){
    if(test(text)){
        cout << "Text Matches!" <<endl;
    }else {
        cout << "No match." <<endl;
}
}


int main(){
    MatchTest pred;

    string value = "lion";
    MatchTest m;
    check("lion", m);

    return 0;
}
