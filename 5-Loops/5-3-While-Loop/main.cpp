#include <iostream>

int main(){
    //While loop
    const unsigned int COUNT {10};

    unsigned int i {0};

    while ( i < COUNT ){
        std::cout << "I love C++" << std::endl;
        ++i;
    }

    //Can use size_t
    size_t j {0};

    while (j < COUNT) {
        std::cout << "I love C++" << std::endl;
        ++j;        
    }

    return 0;
}