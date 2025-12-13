#include <iostream>


bool accept() {
    std::cout << "Answer y or n " << "\n";
    char answer = 0;
    std::cin >> answer;
    
    switch (answer) {
    case 'y': 
        std::cout << "you chose: " << answer << "\n";
        return true;
    case 'n':
        std::cout << "you chose: " << answer << "\n";
        return false;
    default:
        std::cout << "I'll take that as a no..." << "\n";
        return false;
    }
}

int main()
{
    accept();
}
