#include <iostream>

class Fichier {
private:
    char* pointeur; // Pointeur vers l'espace m�moire
    int longueur;   // Longueur en nombre d'octets

public:
    // Constructeur
    Fichier(int taille) {
        longueur = taille;
        pointeur = new char[longueur];
    }

    // Destructeur
    ~Fichier() {
        delete[] pointeur;
    }

    // M�thode pour allouer de l'espace m�moire
    void Creation(int taille) {
        longueur = taille;
        pointeur = new char[longueur];
    }

    // M�thode pour remplir l'espace m�moire
    void Remplit() {
        for (int i = 0; i < longueur; i++) {
            pointeur[i] = 'X'; // Remplissage arbitraire
        }
    }

    // M�thode pour afficher la zone m�moire
    void Affiche() {
        for (int i = 0; i < longueur; i++) {
            std::cout << pointeur[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Instanciation de la classe Fichier
    Fichier monFichier(10); // Cr�e un fichier de 10 octets

    // Appel des m�thodes
    monFichier.Remplit(); // Remplit le fichier
    monFichier.Affiche(); // Affiche le contenu du fichier

    // Destruction de l'objet
    // Le destructeur sera automatiquement appel� lors de la sortie du scope
    return 0;
}
