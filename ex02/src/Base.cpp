#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

Base::~Base(){
    std::cout << "Base class constructer called" << std::endl;
};


Base* generate(void)
{
    (srand(time(0)));
    int classNumber = (rand() %3);
    if(classNumber == 0)
        return (new A);
    else if (classNumber == 1)
        return (new B);
    else
        return (new C);
}
void identify(Base* p){

   if(dynamic_cast<A*>(p)) 
    std::cout << "pointer is A" << std::endl;
   if(dynamic_cast<B*>(p)) 
    std::cout << "pointer is B" << std::endl;
   if(dynamic_cast<C*>(p)) 
    std::cout << "pointer is C" << std::endl;

};
void identify(Base& p){

    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "the class is A" << std::endl;
    }
    catch(std::exception &e){};
    try {
        B a = dynamic_cast<B&>(p);
        std::cout << "the class is B" << std::endl;
    }
    catch(std::exception &e){};
    try {
        C a = dynamic_cast<C&>(p);
        std::cout << "the class is C" << std::endl;
    }
    catch(std::exception &e){};
};