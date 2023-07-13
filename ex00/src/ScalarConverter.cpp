#include "../include/ScalarConverter.hpp"
# define Iq input ==
# define pseudo -1
std::string input;
structValues Values;

bool ScalarConverter::isChar()
{
    if(input.length() == 1 && isprint(static_cast<unsigned char>(input.c_str()[0])) && !isdigit(input.c_str()[0]))
        return (true);
    return (false);
}

ScalarConverter::ScalarConverter(){

};

ScalarConverter::ScalarConverter(char **c_input, int argsNumber){
    (argsNumber != 2) ? throw (std::string)("invalid number of args") : \
    !(*c_input[1]) ? throw (std::string)("empty string"):input = (c_input[1]);
    try
    {
        if (Iq "-inff" || Iq "+inff" || Iq "nanf")
        {
            (input[input.length()  - 1] = '\0');
            throw 'E';
        }
        if((Iq "-inf" || Iq "+inf" || Iq "nan")){
            throw 'E';
        }
    }
    catch (char wh){
            std::cout <<  "char: impossible" <<  std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << input + 'f' << std::endl; 
            std:: cout << "double: " << input << std::endl;
            std::exit(EXIT_SUCCESS);
    }
    if (strtod(input.c_str(), NULL) > INT32_MAX || strtod(input.c_str(), NULL) < INT32_MIN)
        throw (std::string)("too long");
};

void  ScalarConverter::convert(std::string literal){
   Values.Char = (isChar() == true) ? static_cast<char>(input[0]) : NONPRINT;
   Values.Double = (isChar() == true) ? static_cast <double>(Values.Char) : strtod(literal.c_str(), NULL);
   Values.Float = static_cast<float>(Values.Double);
   Values.Int = static_cast<int>(Values.Double);
};

ScalarConverter::~ScalarConverter()
{
    std::cout << "char " ;
    if (Values.Int < 200 && Values.Int > 0){
    (Values.Char == NONPRINT && !isprint(Values.Int)) ?
                     std::cout << "Non displayable" :
                     std::cout << static_cast<char> (Values.Int);
    }
    else
         std::cout << "Non displayable";
    std::cout << std::endl;
    std::cout << "int " << Values.Int << std::endl;
    std::cout << "Float " << std::fixed << std::setprecision(2)<< Values.Float << "f" << std::endl;
    std::cout << "Double " << std::fixed << std::setprecision(2) << Values.Double << std::endl;
}

ScalarConverter ScalarConverter::operator=(ScalarConverter &){
    return (*this);
};
