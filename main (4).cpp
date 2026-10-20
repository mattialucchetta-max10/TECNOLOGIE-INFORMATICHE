#include <iostream>

int main()
{
    float n1, n2, n3, n4, n5;
    std::cout << "Inserisci primo numero \n";
    std::cin >> n1;
    std::cout << "Inserisci secondo numero \n";
    std::cin >> n2;
    std::cout << "Inserisci terzo numero \n";
    std::cin >> n3;
    std::cout << "Inserisci quarto numero\n";
    std::cin >> n4;
    std::cout << "Inserisci quinto numero \n";
    std::cin >> n5;
    
    std::cout << "media =" << (n1 + n2 + n3 + n4 + n5)/5;

    return 0;
}