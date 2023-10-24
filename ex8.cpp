#include <iostream>
using namespace std;
class Complexe {
private:
    double reel;
    double imaginaire;
    
public:
    Complexe(double r, double i) : reel(r), imaginaire(i) {}

    void afficher() {
        cout << reel;
        if (imaginaire >= 0) {
            cout << " + " << imaginaire << "i";
        }
        else {
            cout << " - " << -imaginaire << "i";
        }
    }

    Complexe addition(const Complexe& autre) const {
        return Complexe(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    Complexe soustraction(const Complexe& autre) const {
        return Complexe(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    Complexe multiplication(const Complexe& autre) const {
        return Complexe(reel * autre.reel - imaginaire * autre.imaginaire,
            reel * autre.imaginaire + imaginaire * autre.reel);
    }

    Complexe division(const Complexe& autre) const {
        double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        return Complexe((reel * autre.reel + imaginaire * autre.imaginaire) / denominateur,
            (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur);
    }
};

int main() {
    double reel1, imaginaire1, reel2, imaginaire2;
    cout << "Entrez la partie reelle du premier nombre complexe : ";
    cin >> reel1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginaire1;

    cout << "Entrez la partie reelle du deuxième nombre complexe : ";
    cin >> reel2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> imaginaire2;

    Complexe nombre1(reel1, imaginaire1);
    Complexe nombre2(reel2, imaginaire2);

    int choix;
    cout << "Menu : \n";
    cout << "1. Addition\n";
    cout << "2. Soustraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Entrez votre choix : ";
    cin >> choix;

    Complexe resultat(0, 0);
    switch (choix) {
    case 1:
        resultat = nombre1.addition(nombre2);
        break;
    case 2:
        resultat = nombre1.soustraction(nombre2);
        break;
    case 3:
        resultat = nombre1.multiplication(nombre2);
        break;
    case 4:
        resultat = nombre1.division(nombre2);
        break;
    default:
        cout << "Choix invalide.\n";
        return 1;
    }

    cout << "Résultat de l'opération : ";
    resultat.afficher();
    cout << endl;

    return 0;
}
