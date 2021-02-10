// file_handling.cpp : Opening a file

#include <iostream>
#include <fstream>

int main(){

    std::ifstream in_file;
//    std::fstream in_file;

    std::string in_file_name = "text.txt";

    in_file.open(in_file_name);
//    in_file.open(output_file_name, std::ios::in);
    if (in_file.is_open()){
        std::string line;
        // The following line just reads the first word
//        in_file >> line;
//        while (!in_file.eof()){// eof - end of file
        while (in_file){// Previously operator already defined
            // To get the line:
            std::getline(in_file, line);
            std::cout << line << std::endl;
        }
        in_file.close();
    }
    else {
        std::cout << "Could not create file" << std::endl;
    }
    return 0;
}
