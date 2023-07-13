#ifndef Serializer_H
#define Serializer_H

#include <stdint-gcc.h>
#include <string>

struct Data
{
    int first;
    int sc;
    int third;
    std::string name;
    std::string sname;  
};

class Serializer {
    public :
      static uintptr_t serialize(Data* ptr);
      static Data* deserialize(uintptr_t raw);
};




#endif