#include <iostream>
#include <string>
#include "Monstre.cpp"

using namespace std;

int main(){

    Monstre *Dragon = new Monstre(40,5,"Dragon_Rouge");

    //test du constructeur
    cout << Dragon->toString() << endl << endl;

    //test des degats
    cout << "test des degats, on enleve l'attaque du dragon\n";
    Dragon->takeDamage(Dragon->getAtt());
    cout << Dragon->getPv();
    
    return 0;
}