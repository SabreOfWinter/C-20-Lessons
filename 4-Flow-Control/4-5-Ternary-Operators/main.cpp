#include <iostream>

int main(){

    int max {};

    int a{35};
    int b{20};
    
    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if(a > b){
        max = a;
    }
    else{
        max = b;
    }

    std::cout << "max : " << max << std::endl;


    //Ternary expression
    /*
        result = (condition) ? option1 : option2;

        --Equivalent--

        if(condition){
            result = option1;
        }
        else{
            result = option2;
        }
    */

    int max{};

    int a{35};
    int b{20};

    max = (a > b) ? a : b;

    std::cout << "max : " << max << std::endl;

    //Types must match or be convertiable 
    //max = (a > b) ? a : "b"; //ERROR

    //Ternary initialization
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed { fast ? 300 : 150};

    std::cout << "The speed is " << speed << std::endl;
    return 0;
}