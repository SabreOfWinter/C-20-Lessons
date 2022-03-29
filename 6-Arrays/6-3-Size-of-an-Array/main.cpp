#include <iostream>
#include <iterator>
#include <vector>

int main(){
    // Size of an array, Introduced in C++17
    std::vector<int> scores = {10, 12, 15, 11, 18, 17, 22, 23, 24};

    int count { std::size(scores) };
    // can get the size with std::size
    std::cout << "scores size : " << std::size(scores) << std::endl;

    for(size_t i{0}; i << std::size(scores); ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    return 0;
}