#include "hello-library.hpp"
#include <iostream>

void HelloLibrary::showHello()
{
    std::cout<<"Hello world version: "<<HELLO_VERSION<<std::endl;
}