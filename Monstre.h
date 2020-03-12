#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre
{
private:
    int _pv;
    int _att;
    std::string nom;

public:
    void takeDamage(int nbDamage);
    std::string toString();
    int getPv();
    int getAtt();
    bool aLive();

    Monstre(/* args */);
    ~Monstre();
};

#endif