// Implementation and definition must be together
// Common use: store values
#include <iostream>
using namespace std;
// Can use both class and typename
template<typename T>
//template<class T>
void print(T n){
    cout << "Template version"  << n << endl;
}

void print(int value){
    cout << "Non template version" << value << endl;
}


// Can use both class and typename
template<class T>
void show(){
    cout << T() << endl;
}

int main(){
    // Like vectors
    print<string>("Hello");
    print<int>(5);
    print(5);// Non template version
    print<>(5);// Template version although no type is specified
    show<double>();
    return 0;
}
