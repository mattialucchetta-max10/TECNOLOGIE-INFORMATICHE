#include <iostream>

int main() {
    
    unsigned long long i = 1;

    
    while (true) {
        
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        } 
        else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        } 
        else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        } 
        else {
            std::cout << i << "\n";
        }

        
        ++i;
    }

    return 0;
}
