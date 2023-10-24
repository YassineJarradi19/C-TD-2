#include <iostream>

class TableauEntiers {
private:
    int tableau[10];
public:
    void lireNombres() {
        for (int i = 0; i < 10; i++) {
            std::cout << "Entrez un nombre : ";
            std::cin >> tableau[i];
        }
    }

    int trouverPlusPetit() {
        int plusPetit = tableau[0];
        for (int i = 1; i < 10; i++) {
            if (tableau[i] < plusPetit) {
                plusPetit = tableau[i];
            }
        }
        return plusPetit;
    }

    int trouverPlusGrand() {
        int plusGrand = tableau[0];
        for (int i = 1; i < 10; i++) {
            if (tableau[i] > plusGrand) {
                plusGrand = tableau[i];
            }
        }
        return plusGrand;
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
