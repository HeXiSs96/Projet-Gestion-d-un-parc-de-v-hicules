#include <iostream>
#include "ParcAuto.hpp"
#include "Voiture.hpp"
#include "Camion.hpp"
using namespace std;

void afficherMenu() {
    cout << "\nBienvenue dans la base de données des véhicules" << endl;
    cout << "Que souhaitez-vous faire ?" << endl;
    cout << "1. Ajouter un véhicule" << endl;
    cout << "2. Supprimer un véhicule" << endl;
    cout << "3. Afficher tous les véhicules" << endl;
    cout << "4. Rechercher un véhicule par modèle" << endl;
    cout << "5. Afficher le nombre de véhicules disponibles" << endl;
    cout << "6. Mettre un véhicule en maintenance" << endl;
    cout << "7. Retirer un véhicule de la maintenance" << endl;
    cout << "8. Quitter" << endl;
    cout << "Votre choix: ";
}

int main() {
    ParcAuto parc;
    // Charger les données depuis un fichier texte au démarrage
    parc.chargerDepuisFichier("vehicules.txt");

    int choix;

    do {
        afficherMenu();
        cin >> choix;

        switch (choix) {
        case 1: {
            string type, modele, carburant;
            int annee, kilometrage, capacite;
            cout << "Type de véhicule (voiture/camion): ";
            cin >> type;

            cout << "Modèle: ";
            cin >> modele;
            cout << "Année: ";
            cin >> annee;
            cout << "Kilométrage: ";
            cin >> kilometrage;

            if (type == "voiture") {
                cout << "Type de carburant: ";
                cin >> carburant;
                parc.ajouterVehicule(new Voiture(modele, annee, kilometrage, carburant));
            } else if (type == "camion") {
                cout << "Capacité de charge (kg): ";
                cin >> capacite;
                parc.ajouterVehicule(new Camion(modele, annee, kilometrage, capacite));
            } else {
                cout << "Type de véhicule inconnu, veuillez entrer 'voiture' ou 'camion'." << endl;
            }
            break;
        }
        case 2: {
            string modele;
            cout << "Entrez le modèle du véhicule à supprimer: ";
            cin >> modele;
            parc.supprimerVehicule(modele);
            break;
        }
        case 3:
            parc.afficherParc();
            break;
        case 4: {
            string modele;
            cout << "Entrez le modèle du véhicule à rechercher: ";
            cin >> modele;
            parc.rechercherVehiculeParModele(modele);
            break;
        }
        case 5:
            cout << "Nombre de véhicules disponibles: " << parc.vehiculeDisponible() << endl;
            break;
        case 6: {
            string modele;
            cout << "Entrez le modèle du véhicule à mettre en maintenance: ";
            cin >> modele;
            parc.mettreVehiculeEnMaintenance(modele);
            break;
        }
        case 7: {
            string modele;
            cout << "Entrez le modèle du véhicule à retirer de la maintenance: ";
            cin >> modele;
            parc.retirerVehiculeDeMaintenance(modele);
            break;
        }
        case 8:
            cout << "Sauvegarde des données..." << endl;
            parc.sauvegarderDansFichier("vehicules.txt");
            cout << "Au revoir!" << endl;
            break;
        default:
            cout << "Choix invalide, veuillez réessayer." << endl;
        }
    } while (choix != 8);

    return 0;
}
