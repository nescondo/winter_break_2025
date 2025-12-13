#include <iostream>
#include <complex>
#include <vector>

int main()
{
    double d1 = 2.3;
    double d2 {2.5}; // using {}-list notation errors when using different types (prevents type conversions leading to compile time errors) - helps to *not* lose data/info

    std::complex<double> z = 1;
    std::complex<double> z2 {d1,d2};
    std::complex<double> z3 = {1,2};
    
    std::vector<int> v {1,2,3,4,5};
    
    std::cout << "d1: " << d1 << "\n";
    std::cout << "d2: " << d2 << "\n";
    std::cout << "z: " << z << "\n"; 
    std::cout << "z2: " << z2 << "\n"; 
    std::cout << "z3: " << z3 << "\n";
    //std::cout << "v: " << v << "\n";
    
}
