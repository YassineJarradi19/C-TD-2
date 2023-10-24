#include <iostream>

class TableauEntiers {
private:
    int tableau[10]; 

public:
    void lireNombres() {
        int* ptr = tableau;
        for (int i = 0; i < 10; i++) {
            std::cout << "Entrez un nombre : ";
            std::cin >> *(ptr + i);
        }
    }

    int trouverPlusPetit() {
        int* ptr = tableau;
        int* ptrMin = ptr;

        for (int i = 1; i < 10; i++) {
            if (*(ptr + i) < *ptrMin) {
                ptrMin = ptr + i;
            }
        }

        return *ptrMin;
    }

    int trouverPlusGrand() {
        int* ptr = tableau;
        int* ptrMax = ptr;
        
        for (int i = 1; i < 10; i++) {
            if (*(ptr + i) > *ptrMax) {
                ptrMax = ptr + i;
            }
        }

        return *ptrMax;
    }
};

int main() {
    TableauEntiers tableau;

    tableau.lireNombres();

    int plusPetit = tableau.trouverPlusPetit();
    int plusGrand = tableau.trouverPlusGrand();

    std::cout << "Le plus petit nombre est : " << plusPetit << std::endl;
    std::cout << "Le plus grand nombre est : " << plusGrand << std::endl;

    return 0;
}
