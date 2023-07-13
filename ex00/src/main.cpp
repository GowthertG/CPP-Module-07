#include "../include/ScalarConverter.hpp"
#include <iostream>

// todo add more test
// todo add cronical form
// ./build/bin "nanffff"
// todo add from 0 to 9 to int value when its taken as input
int main (int args, char **argv)
{
    try
    {
        ScalarConverter data(argv, args);
        data.convert(std::string(argv[1]));
    }
    catch(const std::string &error){
        Error(error);
    }
}
