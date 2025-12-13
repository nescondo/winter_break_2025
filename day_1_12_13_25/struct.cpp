#include <iostream>

struct Vector {
    int sz;         // size of vector
    double* elem;   // pointer to elements of type double in vector
};

void vector_init(Vector& v, int s)
{
    v.sz = s;
    v.elem = new double[s]; // allocates array of s doubles
}


void accessV(Vector v, Vector& rv, Vector* pv)
{
    int i1 = v.sz;          //access thru name
    int i2 = rv.sz;       //access thru reference
    int i3 = pv->sz;      //access thru pointer
    
    std::cout << "i1 = " << i1 << "\n";
    std::cout << "i2 = " << i2 << "\n";
    std::cout << "i3 = " << i3 << "\n";
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v,s);
    double sum = 0;
   
    // fill in vector 
    for (int i=0; i<s; ++i) {
        std::cout << "Enter value at position: " << i << "\n";
        std::cin >> v.elem[i];
    }
    
    // read and sum through vector
    for (int i=0; i<s; ++i) {
        std::cout << "element at " << i << "= " << v.elem[i] << "\n";
        sum += v.elem[i]; 
    } 
    
    accessV(v, v, &v);
 
    return sum;
}

int main()
{
    std::cout << read_and_sum(5) << "\n";
}
