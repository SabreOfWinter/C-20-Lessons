#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    } else{
        std::cout << "Go!" << std::endl;
    }

    //Sizeof
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    //Printing out a bool
    //1 -->> True
    //0 -->> False
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl; 

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl; 


    return 0;
}