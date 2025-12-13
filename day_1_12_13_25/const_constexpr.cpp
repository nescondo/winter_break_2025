#include <iostream>


constexpr int square(int x) //MUST be declared as constexpr if being used in a constexpr variable
{
    //const int res = x * x;
    return x * x;
}

int main()
{
    const int num = 3;
    int num2 = 5;
    
    const int square1 = square(num); // works because const can be evaluated in either compile time or run time (compile time in this case)
    const int square2 = square(num2); // works because const can be evaluated in either compile or run time (runtime in this case)
    constexpr int square3 = square(num); // works because num is const and can be evaluated at compile time
    constexpr int square4 = square(num2); // doesn't work - num2 is not const and cannot be evaluated at compile time
    
}
