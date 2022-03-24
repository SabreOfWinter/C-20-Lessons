#include <iostream>

int main(){
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;


    //AND : Evaluates to true when all operands are true.
    //      A single false operand will drag
    //      the enitre expression to evalute to false

    std::cout << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << " a && b : " << (a && b) << std::endl; // fa;se
    std::cout << " a && c : " << (a && c) << std::endl; // true
    std::cout << " a && b && c : " << (a && b && c) << std::endl; // false


    //OR : Evaluates to true when at least one operand true.
    //      A single true operand will push
    //      the entire expression to evaluating true
    std::cout << std::endl;
    std::cout << "Basic OR operations" << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c) << std::endl;
    std::cout << " a || b || c : " << (a || b || c) << std::endl;
    
    //NOT : Negates whatever operand you put it with
    std::cout << std::endl;
    std::cout << "Basic NOT operations" << std::endl;
    
    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    //Combining logical operators in expression
    std::cout << "!(a && b) || c : " << (! (a && b) || c) << std::endl;
    
    return 0;
}