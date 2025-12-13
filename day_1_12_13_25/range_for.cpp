#include <iostream>

int main()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    
    for (auto x : v) // for each x in v
        std::cout << x << "\n";
    
    std::cout << "--------------" << "\n";
        
    for (auto x : {10,25,100,6351,2314,0,-232})
        std::cout << x << "\n"; 
     
    std::cout << "--------------" << "\n";
    
    for (auto x : {123,456,789,000}) {
        std::cout << x << "\n";
    }
     
    std::cout << "--------------" << "\n";

    for (auto& x : v) { // reference to the index x in v
        std::cout << x << "\n";
    }
}
