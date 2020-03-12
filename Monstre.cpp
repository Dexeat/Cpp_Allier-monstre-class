#include "Monstre.h"

using namespace std;

int Monstre::getPv(){
    return _pv;
}
int Monstre::getAtt(){
    return _att;
}
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
void Monstre::takeDamage(int nbDamage){
    _pv -= nbDamage;
}
Monstre::Monstre(/* args */)
{
}

Monstre::~Monstre()
{
}