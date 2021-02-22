#include <iostream>
#include <include/cpp11_new_features/ring.h>

using namespace std;

int main(){
//    ring<string>::iterator it;
//    it.print();
    ring<string> texstring(3);
    double my_double;
    cout<<sizeof (my_double)<<endl;

    texstring.add("one");
    texstring.add("two");
    texstring.add("three");
    texstring.add("four");
    for (ring<string>::iterator it=texstring.begin(); it != texstring.end(); it++){
        cout << *it << endl;
    }
    for (string value: texstring){
        cout << value << endl;
    }

}
