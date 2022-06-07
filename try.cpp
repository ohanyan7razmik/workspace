#include <iostream>
#include <vector>

int main() {
 
    std::vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(3);
    numbers.push_back(10);
    numbers.emplace_back(13);
    numbers.emplace(9,99);
    for(int n : numbers)
        
        std::cout << n << "\t";

    
    for (auto const &element: array)
        std::cout << element << ' ';
 
 
 
    return 0;
}
