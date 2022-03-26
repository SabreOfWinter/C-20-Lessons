#include <iostream>
#include <limits>

int main(){
    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << std::numeric_limits<int>::max() << std::endl;
    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << std::numeric_limits<long>::max() << std::endl;
    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << std::numeric_limits<float>::max() << std::endl;

    //Other facilities
    std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;
    return 0;
}