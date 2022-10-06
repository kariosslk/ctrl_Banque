#include "comptebancaire.h"

/**
 * @brief CompteBancaire::CompteBancaire
 * @param _solde
 */

CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{
    solde = 0;
}

/**
 * @brief CompteBancaire::Deposer
 * @param _montant
 */

void CompteBancaire::Deposer(const float _montant)
{
    solde = solde + _montant;
    cout << "Votre solde est maintenant de " << solde << endl;
}

/**
 * @brief CompteBancaire::Retirer
 * @param _montant
 * @return
 */

bool CompteBancaire::Retirer(const float _montant)
{
    if(_montant>solde){
        cout << "impossible de retirer se montant" << endl;
    }else{
        solde = solde - _montant;
        cout << "Votre solde est maintenant de " << solde << endl;
    }
    return solde;
}

/**
 * @brief CompteBancaire::ConsulterSolde
 * @return
 */

float CompteBancaire::ConsulterSolde()
{
    cout << "Votre solde est de " << solde << endl;
}
