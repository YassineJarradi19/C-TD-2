#include <iostream>
#include "Pile.h"

int main() {
    Pile p1(5); 
    Pile p2(3); 

    for (int i = 1; i <= 5; ++i) {
        p1.push(i * 10);
    }

    for (int i = 1; i <= 3; ++i) {
        p2.push(i * 5);
    }

    std::cout << "Pile p1 : ";
    while (true) {
        int valeur = p1.pop();
        if (valeur == -1) {
            break;
        }
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    
    std::cout << "Pile p2 : ";
    while (true) {
        int valeur = p2.pop();
        if (valeur == -1) {
            break;
        }
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}
