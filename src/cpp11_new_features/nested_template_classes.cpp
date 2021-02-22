#include <iostream>
#include <include/cpp11_new_features/ring.h>

using namespace std;

int main(){
//    ring<string>::iterator it;
//    it.print();
    ring<string> texstring(3);

    texstring.add("one");
    texstring.add("two");
    texstring.add("three");
    texstring.add("four");

    for (int i = 0; i<texstring.size(); i++){
        cout << texstring.get(i) << endl;
    }

}
