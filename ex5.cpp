#include <iostream>

int main() {
    int a = 2;

    int& ref_a = a;

    int* p_a = &a;

    std::cout << "a : " << a << std::endl;
    std::cout << "Adresse de a : " << &a << std::endl;
    std::cout << "Valeur pointée par ref_a : " << ref_a << std::endl;
    std::cout << "Adresse de ref_a : " << &ref_a << std::endl;
    std::cout << "Valeur pointée par p_a : " << *p_a << std::endl;
    std::cout << "Adresse de p_a : " << p_a << std::endl;

    
}


