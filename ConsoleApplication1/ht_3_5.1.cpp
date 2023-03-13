
#include <iostream>
#include <vector>

template <class T>
T quad(T input) {
    return input * input;
}

template<>
std::vector<int> quad(std::vector<int> input) {
    std::vector<int> v;
    for (std::vector<int>::iterator i = input.begin(); i != input.end(); ++i) {
        v.push_back(*i * *i);
    }
    return v;
}

int main()
{
    std::vector<int> v = { 1,2,3,4,5,6,7,8 };
    int a = 10;

    v = quad(v);

    for (auto i = v.begin(); i != v.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    a = quad(a);

    std::cout << a;
}
