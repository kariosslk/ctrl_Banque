#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include <comptebancaire.h>

class CompteEpargne : public CompteBancaire
{
public:
    CompteEpargne(const float _tauxinterets, const float _solde);
    void CalculerInterets();
    void ModifierTaux();
protected:
    float tauxinterets;
    float solde;
};

#endif // COMPTEEPARGNE_H
