// binary_file.cpp : Creating binary file to save structures
#include <iostream>
#include <fstream>

// Difference between classes and struct: its members are public by default.
// Structs are used for writing to files because bytes are mapped directly
// to the name of the struct.
#pragma pack(push, 1)
struct Person {
    // std::string name; // String doesn't store the text directly.
    // It stores a point, so it cannot be used to read from a text.
    // So, char must be used.
    char name[50];
    int age;  // 4 bytes
    double heigh; // 8 bytes
};
// Turn on again
#pragma pack(pop)

int main(){
    // Output is 64 because of padding, #pragma pack(push, 1) removes padding, so size is 62
    std::cout << sizeof(Person) << std::endl;

    Person someone = {"Frodo", 220, 0.8};
    // Write binary file
    std::string filename = "test.bin";
    std::ofstream output_file;
    output_file.open(filename, std::ios::binary);
    if (output_file.is_open()){

        output_file.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        output_file.close();
    } else {
        std::cout << "Could not create file " << filename;
    }
    // Read Binary file
    Person someon_else = {};
    std::ifstream input_file;
    input_file.open(filename, std::ios::binary);
    if (input_file.is_open()){

        input_file.read(reinterpret_cast<char *>(&someon_else), sizeof(Person));
        input_file.close();
    } else {
        std::cout << "Could not create file " << filename;
    }

    std::cout << someon_else.name << someon_else.age << someon_else.heigh << std::endl;
    return 0;
}
