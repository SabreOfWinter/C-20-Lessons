#include <iostream>
#include <iomanip>

int main(){
    //Declare and initialize the variables
    float number1 {1.234567890123456789f};          // Precision : 7
    double number2 {1.12345678901234567890};        // Precision : 15
    long double number3 {1.12345678901234567890L};  // Precision : 15

    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20); //Controls the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; //15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; //15+ digits

    //Float problems: The precision is usually too long for a lot of programs
    //Precision gone wrong
    float number4 {192400023}; //ERROR: narrowing conversion

    //Scientific notation
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};
    double number8 {0.00000000003498};
    double number9 {3.498e-11};


    //
    double number10{ 5.6 };
    double number11{}; //Initialized to 0
    double number12{}; //Initialized to 0

    //Infinity
    double result { number10 / number11 };

    std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yeilds " << result + number10 << std::endl;

    //NaN
    result = number11 / number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    return 0;
}