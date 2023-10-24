#include <iostream>

// Structure pour les �l�ments de la liste
struct Element {
    int valeur;
    Element* suivant;
    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier; // Pointeur vers le premier �l�ment de la liste

public:
    Liste() : premier(nullptr) {}

    // M�thode pour ajouter un �l�ment au d�but de la liste
    void AjouterAuDebut(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    // M�thode pour supprimer un �l�ment du d�but de la liste
    void SupprimerDuDebut() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    // M�thode pour afficher la liste en entier
    void AfficherListe() {
        Element* actuel = premier;
        while (actuel != nullptr) {
            std::cout << actuel->valeur << " ";
            actuel = actuel->suivant;
        }
        std::cout << std::endl;
    }

    // Destructeur pour �viter les fuites m�moire
    ~Liste() {
        while (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;

    maListe.AjouterAuDebut(3);
    maListe.AjouterAuDebut(2);
    maListe.AjouterAuDebut(1);

    maListe.AfficherListe(); // Affiche : 1 2 3

    maListe.SupprimerDuDebut();
    maListe.AfficherListe(); // Affiche : 2 3

    return 0;
}
