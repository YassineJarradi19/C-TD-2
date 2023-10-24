#include <iostream>

using namespace std;

class Test {
private:
    static int conteur ; 

public:
    void call() {
        cout << "Fonction call appelee" << std::endl;
        conteur++; 
    }

    static int getCount() {
        return conteur; 
    }
};

int Test::conteur = 0; 

int main() {
    Test test1, test2, test3,test4;

    test1.call(); 
    test2.call(); 
    test3.call(); 
    test4.call();

    cout << "La fonction call a été appelée " << Test::getCount() << " fois." << std::endl;

    return 0;
}
