#include <iostream>

int main(){
    //BRACED INITIALIZATION

    //variable may contain random garbage value. WARNING
    int elephant_count;

    int lion_count{}; //Initializes to zero

    int dog_count {10}; //Initializes to 10

    int cat_count {15}; //Initializes to 15

    //Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    //Won't compile, the expression in the braces uses undeclared variables
    int bad_initalization { doesnt_exist1 + doesnt_exist2 };

    // 2.9 is of type double, with a wider range than int. ERROR OR WARNING.
    int narrowing_conversion {2.9}; //2.9 is more than 4 bytes and will cut off the decimal    

    // FUNCTIONAL VARIABLE INITIALIZATION
    int apple_count(5);

    int orange_count(10);

    int fruit_count (apple_count + orange_count);

    int bad_initialization ( doesntexist3 + doesnt_exist4 );

    //Information lost. Less safe than braced initializers
    int narrowing_conversion_functional (2.9);


    //ASSIGNEMENT INITIALIZATION
    int bike_count = 2;

    int truck_count = 7;

    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9;


    //QUERY SIZE OF A TYPE IN MEMORY
    std::cout << "sizeof int : " << sizeof(int) << std::endl; //Ints Mostly take up 4 bytes
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;

    return 0;
}