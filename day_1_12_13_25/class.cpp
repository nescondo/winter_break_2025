#include <iostream>

class Vector {
    public:
        //Vector(int s) {
            //elem = new double[s];
            //sz = s;
        //} equivalent to line 9, though member initialization is preferred because members are initialized directly - this makes the members default-constructed first
        Vector(int s): elem {new double[s]}, sz{s} { }
        double& operator[](int i) { return elem[i]; }
        int size() const { return sz; }
    private:
        double* elem;
        int sz;
};

double read_and_sum(int s)
{
    Vector v(s);
    double sum = 0;
    
    for (int i=0; i<s; ++i) {
        std::cout << "enter value in position: " << i << "\n"; 
        std::cin >> v[i];
    }

    for (int i=0; i<s; ++i) {
        std::cout << v[i] << "\n";
        sum += v[i];
    }
    
    std::cout << "sum: " << sum << "\n"; 
    return sum;
    
}

int main()
{
    read_and_sum(6);
}
