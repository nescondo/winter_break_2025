#include <iostream>
#include <string>

struct Entry {
    std::string name;
    unsigned long long number;
};

//overloading '<<' operator (put in) for cout to return {"name", number} format for Entry struct
std::ostream& operator<<(std::ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\"," << e.number << "}";
}

//overloading '>>' operator (get from) for cin to read in user input formatted as {"name", number}
std::istream& operator>>(std::istream& is, Entry& e) 
// formatted as {"name", number}
{
    char c, c2;
    if (is>>c && c=='{' && is>>c2 && c2=='"') {
        std::string name;
        while (is.get(c) && c!='"') {
            name+=c;
        }
        
        if (is>>c && c==',') {
            unsigned long long number = 0;
            if (is>>number>>c && c=='}') {
                e = {name, number};
                return is;
            }
        }
    }
    is.setstate(std::ios_base::failbit);
    return is;
}

int main()
{
    Entry pair;
    std::cin >> pair;
    std::cout << pair;
}
