// Exceptions.cpp : Test throwing exceptions and define custom exception class

#include <iostream>
#include <exception>
// Funtion to test throwing an exception as a string
void mightGoWrong() {
    bool error = true;
    if (error) {
        throw std::string("Something went wrong");
    }
}


// Custom exception
class MyException: public std::exception
{
public:
    virtual const char* what() const throw() {
        return "My class exception";
    };
};

class Test
{
public:
    Test() {
        std::cout << "Test running!\n";
        throw MyException();
    }
};

int main(){

    try
    {
        mightGoWrong();
    }
    // Here the exception is caught by taking its memory address
    catch (std::string  &e)
    {
        std::cout << "My function exception: " << e << "\n";
    }

    try
    {
        Test mytest;
    }
    // Catch custom exception. Thus, the method what() can be accessed
    catch (MyException &e)
    {
        std::cout << "My custom exception: " << e.what() << "\n";
    }
    std::cout << "Still running!\n";

    return 0;
}

// Standard exceptions should be used, to avoid defining an already defined exception.
// (https://stackoverflow.com/questions/11938979/what-exception-classes-are-in-the-standard-c-library)
// (http://en.cppreference.com/w/cpp/error/exception)
//std::exception <exception> interface(debatable if you should catch this)
//std::bad_alloc <new> failure to allocate storage
//std::bad_array_new_length <new> invalid array length
//std::bad_cast <typeinfo> execution of an invalid dynamic - cast
//std::bad_exception <exception> signifies an incorrect exception was thrown
//std::bad_function_call <functional> thrown by "null" std::function
//std::bad_typeid <typeinfo> using typeinfo on a null pointer
//std::bad_weak_ptr <memory> constructing a shared_ptr from a bad weak_ptr
//std::logic_error <stdexcept> errors detectable before the program executes
//std::domain_error <stdexcept> parameter outside the valid range
//std::future_error <future> violated a std::promise / std::future condition
//std::invalid_argument <stdexcept> invalid argument
//std::length_error <stdexcept> length exceeds its maximum allowable size
//std::out_of_range <stdexcept> argument value not in its expected range
//std::runtime_error <stdexcept> errors detectable when the program executes
//std::overflow_error <stdexcept> arithmetic overflow error.
//std::underflow_error <stdexcept> arithmetic underflow error.
//std::range_error <stdexcept> range errors in internal computations
//std::regex_error <regex> errors from the regular expression library.
//std::system_error <system_error> from operating system or other C API
//std::ios_base::failure <ios> Input or output error
