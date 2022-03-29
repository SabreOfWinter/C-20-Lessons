#include <iostream>

int main() {
    //Array of characters
    char message [5] {'H', 'e', 'l', 'l', 'o'};

    //Print out the array through
    std::cout << "message : ";
    for (auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;

    //Can also modify elements of the char array
    std::cout << std::endl;
    std::cout << "Modify array data : " << std::endl;

    message[1] = 'a';

    //Print out the array
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    
    //Direct print out
    std::cout << "message : " << message << std::endl;


    //Null termination   
    //Helps to prevent garbage text from apendded to the end of the array
    char message1 [] {'H', 'e', 'l', 'l', 'o', '\0'};
    
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "size : " << std::size(message1) << std::endl;


    //Auto filled in null characters
    char message2[6] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "size : " << std::size(message2) << std::endl;


    //Looks may be deceiving 
    char message3 [] {'H', 'e', 'l', 'l', 'o'}; //This is not a c string, as there is not null character

    std::cout << "message3 : " << message3 << std::endl; 
    std::cout << "size : " << std::size(message3) << std::endl; //Will probably print some garbage after our hello message


    //Literal C-Strings
    //Can also define a literal C string
    std::cout << std::endl;
    char message4 [] {"Hello"}; //An implicit '\0' character is appended to the end of the string, making it a c string

    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "size : " << std::size(message4) << std::endl;

    //Can even have spaces between characters 
    std::cout << std::endl;
    char message5[] {"Hello world!"};
    
    std::cout << "messages5 : " << message5 << std::endl;
    std::cout << "size : " << std::size(message5) << std::endl;


    //Arrays of char are special
    //Can't direct print arrays other than that of chars
    std::cout << std::endl;  
    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    std::cout << "numbers : " << numbers << std::endl; 

    return 0;
}