#include "compteepargne.h"

/**
 * @brief CompteEpargne::CompteEpargne
 * @param _tauxinterets
 * @param _solde
 */

CompteEpargne::CompteEpargne(const float _tauxinterets, const float _solde):
    CompteBancaire(_solde),
    tauxinterets(_tauxinterets)
{

}

/**
 * @brief CompteEpargne::CalculerInterets
 */

void CompteEpargne::CalculerInterets()
{
    tauxinterets = solde * 0.02;
    cout << "Les interets sont de : " << tauxinterets << " %" << endl;
}

void CompteEpargne::ModifierTaux()
{

}
