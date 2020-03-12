#include "Monstre.h"

using namespace std;

//done les pv
int Monstre::getPv(){
    return _pv;
}
//donne l'attaque
int Monstre::getAtt(){
    return _att;
}
//regarde si le mopnstre est mort
bool Monstre::aLive(){
    if (_pv<=0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
//permet d'enlever des pv
void Monstre::takeDamage(int nbDamage){
    _pv -= nbDamage;
}

//renvoie un string
string Monstre::toString(){
    string str1 = _nom + "\nPoint de vie: " + std::to_string(_pv) + "\nAttaque : " + std::to_string(_att) + "\n";
    return str1;
}

//constructeur
Monstre::Monstre(int pv,int att,std::string nom): _pv(pv),_att(att),_nom(nom)
{
}

Monstre::~Monstre()
{
}