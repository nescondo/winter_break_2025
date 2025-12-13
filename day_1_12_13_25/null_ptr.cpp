#include <iostream>

int count_x(char* p, char x)
{
    if (p==nullptr) return 0;
    int count = 0;
    
    for (; *p!=0; ++p) {
        if (*p==x) {
            count++;
        }
    }
    return count;
}
int main()
{
    char v[] = {'a', 'b', 'c', 'a', 'd', 'e', 'a', 'c', 'e', 'a'};
    char* p = &v[0];
    std::cout << count_x(p, 'a') << "\n";
}
