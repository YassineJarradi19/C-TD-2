#include <iostream>
#include <cmath>

using namespace std;

class Vecteur {
private:
    float x;
    float y;
    float z;

public:
    Vecteur(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }

    Vecteur somme(const Vecteur &valeur) const {
        return Vecteur(x + valeur.x, y + valeur.y, z + valeur.z);
    }

    float produitScalaire(const Vecteur &autre) const {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    bool coincide(const Vecteur &autre) const {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    static Vecteur &normax(Vecteur &v1, Vecteur &v2) {
        return v1.norme() > v2.norme() ? v1 : v2;
    }
};

int main() {
    Vecteur v1(1, 2, 3);
    Vecteur v2(4, 5, 6);

    cout << "Vecteur v1 : ";
    v1.afficher();
    cout << endl;

    cout << "Vecteur v2 : ";
    v2.afficher();
    cout << endl;

    cout << "Somme des vecteurs : ";
    Vecteur somme = v1.somme(v2);
    somme.afficher();
    cout << endl;

    cout << "Produit scalaire : " << v1.produitScalaire(v2) << endl;

    cout << "Les vecteurs ";
    if (v1.coincide(v2)) {
        cout << "ont les memes composantes.";
    }
    else {
        cout << "n'ont pas les memes composantes.";
    }
    cout << endl;

    cout << "Norme de v1 : " << v1.norme() << endl;
    cout << "Norme de v2 : " << v2.norme() << endl;

    cout << "Le vecteur avec la plus grande norme est : ";
    Vecteur &maxNorme = Vecteur::normax(v1, v2);
    maxNorme.afficher();
    cout << endl;

    return 0;
}
