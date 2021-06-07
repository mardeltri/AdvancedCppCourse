#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string &test){
    return test.size() == 3;
}

class Check{
public:
    bool operator()(string &test){
        return test.size() == 5;
    }
}check1;


void run(function<bool(string&)> check){
    string test = "dog";
    cout << check(test) << endl;
}
int main(){
    int size = 5;
    vector <string> vec{"one", "two", "three"};
    auto  lambda = [size](string test){return test.size() == size;};
    int count = count_if(vec.begin(), vec.end(), lambda);
    cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check);
    cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check1);
    cout << count << endl;

    run(lambda);
    run(check);
    run(check1);

    function<int(int, int)> add = [](int one, int two){return one + two;};
    cout << add(1,3) << endl;


    return 0;
}
