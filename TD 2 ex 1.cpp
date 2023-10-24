#include <iostream>

void afficherNombreAppels() {
    static int compteur = 1;
    std::cout << "Appel numéro " << compteur << std::endl;
    compteur++;
}

int main() {
    afficherNombreAppels();
    afficherNombreAppels();
    afficherNombreAppels();
    afficherNombreAppels();
    afficherNombreAppels();


    return 0;
}
