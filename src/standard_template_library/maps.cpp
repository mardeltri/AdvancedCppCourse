// vectors.cpp : Creating vectors
#include <iostream>
#include <map>
// List allows to include elements anywhere (back or front)
// vectors just allows to include elements at the front.
using namespace std;

int main(){
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    ages["Mike"] = 70; // Overwrite Mike

    ages.insert(pair <string, int> ("Peter", 100));

    ages.insert(make_pair("Peter", 100));

    cout << ages["Raj"]<<endl;
    cout << ages["Sue"]<<endl; // Creates the map key and value 0

    // Use find to check if the key exists
    if (ages.find("Vicky") != ages.end()){
        cout << "Found vicky" << endl;
    }else {
        cout << "Key not found" << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); ++it){
        cout << it->first << it->second << endl;
    }
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); ++it){
        pair<string, int> age = *it;
        cout << age.first << age.second << endl;
    }
    return 0;
}
