#include <iostream>
#include <string>

int main(){
    // //Data outputs
    
    // //std::cout : Printing things to the console
    // std::cout << "Hello world" << std::endl;

    // std::cout << "The number is :" << 12 << std::endl;

    // int age {12};
    // std::cout << "The age is : " << age << std::endl;

    // //Error
    // std::cerr << "std::cerr output : Something went wrong" << std::endl;

    // //Log message
    // std::clog << "std::clog output : This is a log message" << std::endl;


    // //Reading data in
    int age;
    std::string name;

    std::cout << "Please type in your Last name : " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;


    // // Chainging std::cin
    std::cin >> name >> age; //Input and output 

    // // Reading data with spaces
    std::string full_name;

    std::cout << "Please type in your full name : " << std::endl;
    std::getline(std::cin, full_name);

    std::cout << "Type in your age : " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;     
}
