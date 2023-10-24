

#include <iostream>
using namespace std;
class ex6 {
public:
    void incrementer(int &valeur) {
        valeur++;
        
        
    }
    void permuter(int &a,int &b){
        int number = a;
        a = b;
        b = number; 
    }

};

int main()
{
    ex6 ex6;
    int nombre = 5;
    int a = 10, b = 20;
    cout << "Valeur avant l'incrémentation : " << nombre << endl;
    ex6.incrementer(nombre);
    cout << "Valeur après l'incrémentation : " << &nombre << endl;
    cout << "Valeur après l'incrémentation : " << nombre << endl;
    cout << "Avant permutation : a = " << a << ", b = " << b << endl;
    ex6.permuter(a, b);
    cout << "Après permutation : a = " << a << ", b = " << b << endl;
}


