// parsing_file.cpp : Parsing a file
// Python or perl are optimal for file parsing, not cpp (9. Parsing files 1:25)
#include <iostream>
#include <fstream>

int main(){

    std::ifstream input;
//    std::fstream in_file;

    std::string filename = "stats.txt";

    input.open(filename);
    if (!input.is_open()){
        return 1;
    }

    while (input) {
        std::string line;
        // Delimiter is passed in the third argument. Single quotes creates a single character. Double quotes creates a string
        std::getline(input, line, ':');
        int population;
        input >> population;
//        input.get();
        // Cpp 11
        input >> std::ws; // Get white spaces
        if (!input){
            break;
        }
        std::cout << line << "--" << population << std::endl;
    }

    return 0;
}
