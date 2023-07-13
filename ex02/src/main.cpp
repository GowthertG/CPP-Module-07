#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include "../include/Base.hpp"

int main ()
{

    Base *b  = generate();
    identify(*b);
    identify(b);


}