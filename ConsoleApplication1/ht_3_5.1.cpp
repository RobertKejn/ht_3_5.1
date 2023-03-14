
#include <iostream>
#include <vector>

template <class T>
T quad(T input) {
    return input * input;
}

template<class T>
std::vector<T> quad(std::vector<T> input) {
    for (auto i = input.begin(); i != input.end(); i++) {
        *i = *i * *i;
    }
    return input;
}

int main()
{
    std::vector<double> v = { 1,2,3,4,5,6,7,8 };
    int a = 10;

    v = quad(v);

    for (auto i = v.begin(); i != v.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    a = quad(a);

    std::cout << a;
}
