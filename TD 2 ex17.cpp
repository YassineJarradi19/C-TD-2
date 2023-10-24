#include <iostream>

struct Element {
    int valeur;
    Element* suivant;
    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier; // Pointeur vers le premier élément de la liste

public:
    Liste() : premier(nullptr) {}

    void AjouterAuDebut(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    void SupprimerDuDebut() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void AfficherListe() {
        Element* actuel = premier;
        while (actuel != nullptr) {
            std::cout << actuel->valeur << " ";
            actuel = actuel->suivant;
        }
        std::cout << std::endl;
    }

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
