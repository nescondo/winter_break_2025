#include <iostream>

int main()
{
    double d = 2.2;
    std::cout << "d = 2.2: " << d << "\n";

    int i = 3;
    std::cout << "i = 3: " << i << "\n";

    // d is double regardless of i's type
    d = d + i;
    std::cout << "d = d + i: " << d << "\n";
    
    // i is int regardless of d's type
    i = d * i;
    std::cout << "i = d * i: " << i << "\n";
}
