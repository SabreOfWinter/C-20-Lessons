#include <iostream>

int main(){

    //For Loop

    for(unsigned int i{}; i < 10; ++i){
        std::cout << "I love C++" << std::endl;
    }

    //Use size_t : a representation of some unsigned int for positive numbers [sizes]
    for(size_t i{}; i < 10; ++i){
        std::cout << "I love C++" << std::endl;
    }


    //Other operations in the loop body
    for(size_t i{0}; i < 10; ++i){
        std::cout << "i : " << i << ". Double that and you get " << 2*i << std::endl;
    }


    //Can leave out the curly braces
    for (size_t i{}; i < 5; ++i)
        std::cout << "Single statment in body. Can leave out {} on loop body" << std::endl;
    

    //Scope of the iterator
    for(size_t i{0}; i < 10; ++i){
        // i is valid to use within the boundaries of the {} here
        std::cout << "i is usuable here, the value is : " << i << std::endl;
    }
    //If you try to access i here, you'll get an error
    //i doesn't exist in the main function local scope


    //Iterator can live outside the loop scope
    size_t j{};

    for(j; j < 10; ++j){
        std::cout << "Using the j variables from main function local scope : " << j << std::endl;
    }
    std::cout << "Loop done, the value of j is : " << j << std::endl;


    //Can leave out the iterator declaration in the loop
    for ( ; j < 10; ++j){
        std::cout << "Using the j variable from main function local scope : " << j << std::endl;
    }
    std::cout << "Loop done, the value of j is : " << j << std::endl;

    
    //Hard coded values are bad
    const size_t COUNT {10};
    for(size_t j{}; j < COUNT; ++j){
        std::cout << "The value of j is : " << j << std::endl;
    }

    return 0;
}