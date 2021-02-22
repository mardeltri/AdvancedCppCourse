#include <iostream>
#include <vector>

using namespace std;

int main(){
    int values[] = {1, 4, 5};

    cout << values[0] << endl;

    class C{
    public:
        string text;
        int id;
    };

    C c1 = {"Hello", 7};

    struct S{
        string text;
        int id;
    };

    S s1 = {"Hello", 7};
    cout << s1.text << endl;

    struct R{
        string text;
        int id;
    }r1 = {"Hello", 7}, r2 = {"Hello", 7};

    cout << r1.text << endl;
    cout << r2.text << endl;

    vector<string> strings;
    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");

    return 0;
}
