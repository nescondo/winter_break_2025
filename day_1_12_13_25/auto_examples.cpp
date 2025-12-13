#include <iostream>
#include <typeinfo>

int main() 
{
    auto i = true;
    auto num = 3;
    auto d = 4.7;
    auto ch = 'x';

    std::cout << "type of i: " << typeid(i).name() << "\n";
    std::cout << "type of num: " << typeid(num).name() << "\n";
    std::cout << "type of d: " << typeid(d).name() << "\n";
    std::cout << "type of ch: " << typeid(ch).name() << "\n";
}
