#include <iostream>

int main(){
    /*
        Do While loops

        Runs the body then checks the condition
    */

    
    //Loop with output
    const unsigned int COUNT {10};
    unsigned int i {11}; // Initialization

    do{
        std::cout << "[" << i << "] : I Love C++" << std::endl;
        ++i; //Increment
    }
    while(i < COUNT); //Test

    return 0;
}