#include "../include/Serializer.hpp"
#include <iostream>

int main ()
{
    Data *a;
    Data *b;
    Serializer Do;
    a = new Data;
    b = new Data;
    a->first = 1;
    a->sc = 2;
    a->third = 3;
    a->name = "houssam eddine";
    a->sname = "haddouche";
    b = Do.deserialize(Do.serialize(a));
    uintptr_t test = Do.serialize(a);
    std::cout << Do.deserialize(test) <<  std::endl;
    std::cout << b->first << std::endl;
    std::cout << b->name << std::endl;
    std::cout << b->sc << std::endl;
    std::cout << b->sname << std::endl;
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;
    std::cout << b->third << std::endl;
    delete a;

}