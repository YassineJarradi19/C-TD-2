
#include <iostream>
#include "Point.h"
using namespace std;
int main() {
    
    Point point(7, 8);

    cout << "Coordonnees initiales du point : ";
    point.affiche();

    point.deplace(3, 2);

    cout << "Coordonnees après deplacement : ";
    point.affiche();

    return 0;
}
