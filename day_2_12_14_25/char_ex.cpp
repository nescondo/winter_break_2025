#include <iostream>

void digits()
{
    for (int i=0; i<10; ++i) {
        std::cout << static_cast<char>('0'+i);
    }
   
    std::cout << "\n";
 
    for (int i=0; i<10; ++i) {
        std::cout << '0'+i;
    }
}

int main()
{
    digits();
}
