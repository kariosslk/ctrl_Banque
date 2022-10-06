#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <iostream>
using namespace std;

/**
 * @brief The CompteBancaire class
 */

class CompteBancaire
{
public:
    CompteBancaire(const float _solde);
    void Deposer(const float _montant);
    bool Retirer(const float _montant);
    float ConsulterSolde();
protected:
    float solde;
    float montant;
};

#endif // COMPTEBANCAIRE_H
