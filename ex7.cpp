#include <iostream>
using namespace std;
int main() {
    const int taille = 10;
    int tableau[taille];

    cout << "Veuillez entrer 10 entiers : ";
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }

    int nbEchanges;
    do {
        nbEchanges = 0;
        for (int i = 0; i < taille - 1; ++i) {
            if (tableau[i] > tableau[i + 1]) {
                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                nbEchanges++;
            }
        }
    } while (nbEchanges > 0);

    cout << "Tableau trie par ordre croissant : ";
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
