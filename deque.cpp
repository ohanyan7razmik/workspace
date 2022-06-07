#include <iostream>
#include <deque>
#include <iterator>
#include <string>

int main() {

    int dequeSize = 0;
    std::cout << "Enter size of deque: ";
    std::cin >> dequeSize;

    std::deque<char> myDeque(dequeSize);

    std::cout << "enter elements of deque: ";
    for(int i = 0; i < myDeque.size(); i++) {
    
        std::cin >> myDeque[i];
    
    }

    std::cout << "\nEnter deque: ";
    if(!myDeque.empty()) {
    
        std::copy(myDeque.begin(),myDeque.end(), std::ostream_iterator<char>(std::cout," ") );
    }

    return 0;
}
