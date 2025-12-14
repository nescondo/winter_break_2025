#include <thread>
#include <iostream>


struct F {
    void operator()() {
        std::cout << "F() is running (thread 2)" << "\n";
    }
};

void f()
{
    std::cout << "f() is running (thread 1)" << "\n";
    return;
};

int main()
{
    std::thread t1 {f};
    std::cout << "thread 1 has started" << "\n";
    std::thread t2 {F()};
    std::cout << "thread 2 has started" << "\n";

    t1.join();
    std::cout << "thread 1 has finished" << "\n";
    t2.join();
    std::cout << "thread 2 has finished" << "\n";

}
