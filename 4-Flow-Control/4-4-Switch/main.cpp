#include <iostream>

int main(){
    //Tools 
    const int Pen{10};    
    const int Marker{20};
    const int Eraser{30};
    const int Rectangle{40};
    const int Circle{50};
    const int Ellipse{60};

    int tool { Ellipse };

    /*
        Condition: Integral types and enums (int, long, unsigned short, etc.)
    */
    switch (tool) {

        case Pen: {
            std::cout << "Active tool is Pen" << std::endl;
        }
        break;

        case Marker: {
            std::cout << "Active tool is Marker" << std::endl;
        }
        break;

        default: {
            std::cout << "Can't match any tool" << std::endl;
        }
    }
    
    /*
    The break statement after each case is very important. 
    It stops processing the switch block whan a successul case has been found. 
    If the break statement is not there, all the cases following the current one will be executed.
    */

    return 0;
}