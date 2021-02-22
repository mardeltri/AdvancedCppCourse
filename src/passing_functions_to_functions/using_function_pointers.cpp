#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(string test){
//    return test == "two";
    return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*pmatch)(string test)){
    int counter = 0;
    for(auto it = texts.begin(); it != texts.end(); ++it){
        if(pmatch(*it)) {
            counter++;
        }
    }
    return counter;
}

int main(){
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    cout << match("one") << endl;

    cout << count_if(texts.begin(), texts.end(), match)<<endl;
    cout << countStrings(texts, match);

    return 0;
}
