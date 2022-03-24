#include <iostream>
#include <iomanip>

int main(){
    //std::endl
    std::cout << "hello" << std::endl;
    std::cout << "world" << std::endl;

    //std::flush
    std::cout << "This is a nice message..." << std::endl << std::flush;

    //std::setw()
    std::cout << std::setw(10) << "name" <<std::setw(5) << "second name" <<std::endl;

    //std::right default (right)
    std::cout << std::setw(10) << "name" <<std::setw(5) << "second name" <<std::endl;
    
    std::left;
    std::cout << std::setw(10) << "name" <<std::setw(5) << "second name" <<std::endl;

    //std::internal     sign is left justified, data is right justified
    std::internal;
    
    //std::setfill
    std::setfill('-');
    std::cout << std::setw(10) << "name" <<std::setw(5) << "second name" <<std::endl;
    
    //std::boolalpha
    std::boolalpha;

    //std::showpos
    std::showpos;
    std::noshowpos;
    
    //std::dec std::oct and std::hex
    
    //std::showbase
    std::showbase;
    std::noshowbase;
    
    //std::uppercase
    std::uppercase;
    
    //std::scientific and std::fixed

    //std::setprecision

    //std::showpoint

    return 0;
}