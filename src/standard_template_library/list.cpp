// vectors.cpp : Creating vectors
#include <iostream>
#include <list>
// List allows to include elements anywhere (back or front)
// vectors just allows to include elements at the front.


int main(){
    std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    std::list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    std::cout << "Element: " << *it << std::endl;

    std::list<int>::iterator erase_it = numbers.begin();
    erase_it++;
    numbers.erase(erase_it);
    std::cout << "Element: " << *erase_it << std::endl;

    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end();) {
        if (*it == 2){
            numbers.insert(it,1234);
        }
        if (*it == 1){
            it = numbers.erase(it);
        }
        else {
            it++;
        }
    }

    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}
