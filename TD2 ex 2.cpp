#include <iostream>

bool estMultipleDe2(int nombre) {
    return nombre % 2 == 0;
}

bool estMultipleDe3(int nombre) {
    return nombre % 3 == 0;
}

int main() {
    int entier;

    std::cout << "Donnez un entier : ";
    std::cin >> entier;

    if (estMultipleDe2(entier)) {
        std::cout << "Il est pair" << std::endl;
    }
    if (estMultipleDe3(entier)) {
        std::cout << "Il est multiple de 3" << std::endl;
    }
    if (estMultipleDe2(entier) && estMultipleDe3(entier)) {
        std::cout << "Il est divisible par 6" << std::endl;
    }
    else {
        std::cout << "Il est ni pair ni mutiple de 3 ni de 6" << std::endl;

    }

    return 0;
}
