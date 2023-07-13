#ifndef SC_H
#define SC_H

# include <stdlib.h>
# include <ctype.h>
# include <iostream>
# include <stdint.h>
# include <iomanip>
# include <cstdlib>
# define NONPRINT -5
#define Error(X) std::cout << "Error: " << X << std::endl

struct structValues{
    int Int;
    char Char;
    float Float;
    double Double;
};

class ScalarConverter{
    public :
      ScalarConverter();
      ~ScalarConverter();
      ScalarConverter operator=(ScalarConverter &);
      ScalarConverter(char **c_input, int argsNumber);
      static void  convert(std::string literal);
      static bool isChar();
};




#endif