#include <iostream>

class Fichier {
private:
    char* pointeur; // Pointeur vers l'espace mémoire
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

    // Méthode pour allouer de l'espace mémoire
    void Creation(int taille) {
        longueur = taille;
        pointeur = new char[longueur];
    }

    // Méthode pour remplir l'espace mémoire
    void Remplit() {
        for (int i = 0; i < longueur; i++) {
            pointeur[i] = 'X'; // Remplissage arbitraire
        }
    }

    // Méthode pour afficher la zone mémoire
    void Affiche() {
        for (int i = 0; i < longueur; i++) {
            std::cout << pointeur[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Instanciation de la classe Fichier
    Fichier monFichier(10); // Crée un fichier de 10 octets

    // Appel des méthodes
    monFichier.Remplit(); // Remplit le fichier
    monFichier.Affiche(); // Affiche le contenu du fichier

    // Destruction de l'objet
    // Le destructeur sera automatiquement appelé lors de la sortie du scope
    return 0;
}
