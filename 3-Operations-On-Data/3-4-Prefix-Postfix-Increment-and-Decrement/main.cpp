#include <iostream>

int main(){
    
    int value { 5 };

    //Increment by one
    value = value + 1;
    std::cout << "The value is : " << value << std::endl; //6

    value = 5; //Reset value to 5

    //Decrement by one
    value = value - 1;
    std::cout << "The value is : " << value << std::endl; //4

    //========================================================

    //Postfix
    
    //Reset value to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl; //5
    std::cout << "The value is : " << std::endl; // 6

    std::cout << std::endl;

    //Decrement with Postfix
    value = 5;

    std::cout << "The value is (decrementing) : " << value-- << std::endl; //5
    std::cout << "The value is : " << value << std::endl; //4


    //Prefix

    value = 5;

    std::cout << "The value is (incrementing) : " << ++value << std::endl; //6
    std::cout << "The value is : " << std::endl; //6

    std::cout << std::endl;

    //Decrement with Prefix
    value = 5;

    std::cout << "The value is (decrementing) : " << --value << std::endl; //4
    std::cout << "The value is : " << value << std::endl; //4

    return 0;
}