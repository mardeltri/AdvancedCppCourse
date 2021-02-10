// file_handling.cpp : Opening a file

#include <iostream>
#include <fstream>

int main(){

//    std::ofstream out_file;
    std::fstream out_file;

    std::string output_file_name = "text.txt";

//    out_file.open(output_file_name);
    out_file.open(output_file_name, std::ios::out);
    if (out_file.is_open()){
        std::cout << "Creating file" << std::endl;
        out_file << "Hello there" << std::endl;
        out_file << 123 << std::endl;
        out_file.close();
    }
    else {
        std::cout << "Could not create file" << std::endl;
    }
    return 0;
}
