// vectors.cpp : Creating vectors
#include <iostream>
#include <map>
// List allows to include elements anywhere (back or front)
// vectors just allows to include elements at the front.
using namespace std;


int main(){
    // Enable storing pairs with the same key
    multimap<int, string> lookup;
    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(20, "Pop"));

    for (multimap<int, string>::iterator it =lookup.begin(); it != lookup.end() ; it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    for (multimap<int, string>::iterator it =lookup.find(20); it != lookup.end() ; it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    // Search a set of values inside a range
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);

    for (multimap<int, string>::iterator it =its.first; it != its.second ; it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;
    auto its2 = lookup.equal_range(30);

    for (multimap<int, string>::iterator it =its2.first; it != its2.second ; it++) {
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}
