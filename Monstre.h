#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>
#include <iostream>

class Monstre
{
private:
    int _pv;
    int _att;
    std::string _nom;

public:
    void takeDamage(int nbDamage);
    std::string toString();
    int getPv();
    int getAtt();
    bool aLive();

    Monstre(int pv, int att, std::string nom);
    ~Monstre();
};

#endif