// vectors.cpp : Creating vectors
#include <iostream>
#include <vector>


int main(){
    std::vector<std::string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    std::cout << strings[2] << std::endl;
    std::cout << strings.size() << std::endl;

    // Iterator
    std::vector<std::string>::iterator it = strings.begin();
    it++;
    std::cout << *it << std::endl;
    for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); ++it) {
        std::cout << *it << std::endl;

    }
    // Using reverse iterator
    for (std::vector<std::string>::reverse_iterator it = strings.rbegin(); it != strings.rend(); ++it) {
        std::cout << *it << std::endl;

    }
    // Capacity: reserve memory
    // strings.capacity()
    return 0;
}
