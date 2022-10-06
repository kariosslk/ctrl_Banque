#include "comptebancaire.h"
#include "compteepargne.h"
#include "menu.h"
#include <iostream>

using namespace std;

int main(){
    enum choix_menu{
        OPTION_1 = 1,
        OPTION_2,
        OPTION_3,
        OPTION_4,
        QUITTER
    };
    int valeur;
    int choix;
    CompteEpargne leCompteEpargne(1,1);
    CompteBancaire leCompteBancaire(1);
    try{
        Menu leMenu("../LaBanque/compteEpargne.txt");
        do{
            choix = leMenu.Afficher();
            switch (choix){
            case OPTION_1:
                leCompteBancaire.ConsulterSolde();
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "saisissez votre somme a depose" << endl;
                scanf("%d", &valeur);
                leCompteBancaire.Deposer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "saisissez votre somme a retirer" << endl;
                scanf("%d",&valeur);
                leCompteBancaire.Retirer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_4:
                leCompteEpargne.CalculerInterets();
                Menu::AttendreAppuiTouche();
                break;
            }
        } while(choix != QUITTER);
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}

/*          Compte Bancaire !
int main(){
    enum choix_menu{
        OPTION_1 = 1,
        OPTION_2,
        OPTION_3,
        QUITTER
    };

    CompteBancaire solde(1);
    int valeur;
    int choix;
    try{
        Menu leMenu("../LaBanque/compteBancaire.txt");
        do{
            choix = leMenu.Afficher();
            switch (choix){
            case OPTION_1:
                solde.ConsulterSolde();
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "saisissez votre somme a depose" << endl;
                scanf("%d",&valeur);
                solde.Deposer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "saisissez votre somme a retirer" << endl;
                scanf("%d",&valeur);
                solde.Retirer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            }
        } while(choix != QUITTER);
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}
*/
