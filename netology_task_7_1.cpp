#include <iostream>

int main()
{
    int q{};
    short w{};
    long e{};
    long long r{};
    float y{};
    double u{};
    long double i{};
    bool o{};

    std::cout << &q << " " << sizeof(q) << std::endl;
    std::cout << &w << " " << sizeof(w) << std::endl;
    std::cout << &e << " " << sizeof(e) << std::endl;
    std::cout << &r << " " << sizeof(r) << std::endl;
    std::cout << &y << " " << sizeof(y) << std::endl;
    std::cout << &u << " " << sizeof(u) << std::endl;
    std::cout << &i << " " << sizeof(i) << std::endl;
    std::cout << &o << " " << sizeof(o) << std::endl;
}