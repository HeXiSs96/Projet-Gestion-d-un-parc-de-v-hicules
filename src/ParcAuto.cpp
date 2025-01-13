#include "ParcAuto.hpp"
#include "Voiture.hpp"  // Ajout de l'inclusion du fichier Voiture.hpp
#include "Camion.hpp"   // Ajout de l'inclusion du fichier Camion.hpp
using namespace std;

ParcAuto::~ParcAuto() {
    for (auto vehicule : vehicules) {
        delete vehicule;
    }
}

void ParcAuto::ajouterVehicule(Vehicule* vehicule) {
    vehicules.push_back(vehicule);
}

void ParcAuto::supprimerVehicule(const std::string& modele) {
    for (auto it = vehicules.begin(); it != vehicules.end(); ++it) {
        if ((*it)->getModele() == modele) {
            delete *it;
            vehicules.erase(it);
            cout << "Véhicule supprimé: " << modele << endl;
            return;
        }
    }
    cout << "Aucun véhicule trouvé avec le modèle: " << modele << endl;
}

void ParcAuto::afficherParc() const {
    for (const auto& vehicule : vehicules) {
        vehicule->afficherInfo();
        cout << "-" << endl;
    }
}

void ParcAuto::rechercherVehiculeParModele(const std::string& modele) const {
    for (const auto& vehicule : vehicules) {
        if (vehicule->getModele() == modele) {
            vehicule->afficherInfo();
            return;
        }
    }
    cout << "Aucun véhicule trouvé pour le modèle: " << modele << endl;
}

int ParcAuto::vehiculeDisponible() const {
    int count = 0;
    for (const auto& vehicule : vehicules) {
        if (vehicule->isDisponible()) {
            count++;
        }
    }
    return count;
}

void ParcAuto::mettreVehiculeEnMaintenance(const std::string& modele) {
    for (auto& vehicule : vehicules) {
        if (vehicule->getModele() == modele) {
            vehicule->mettreEnMaintenance();
            cout << "Le véhicule " << modele << " a été mis en maintenance." << endl;
            return;
        }
    }
    cout << "Aucun véhicule trouvé pour le modèle: " << modele << endl;
}

void ParcAuto::retirerVehiculeDeMaintenance(const std::string& modele) {
    for (auto& vehicule : vehicules) {
        if (vehicule->getModele() == modele) {
            vehicule->retirerDeMaintenance();
            cout << "Le véhicule " << modele << " a été retiré de la maintenance." << endl;
            return;
        }
    }
    cout << "Aucun véhicule trouvé pour le modèle: " << modele << endl;
}

void ParcAuto::sauvegarderDansFichier(const std::string& nomFichier) const {
    std::ofstream fichier(nomFichier);
    if (fichier.is_open()) {
        for (const auto& vehicule : vehicules) {
            fichier << vehicule->getModele() << " " << vehicule->getAnnee() << " "
                    << vehicule->getKilometrage() << " " << vehicule->isDisponible() << " ";
            
            if (dynamic_cast<const Voiture*>(vehicule)) {
                fichier << "voiture " << dynamic_cast<const Voiture*>(vehicule)->getTypeCarburant() << std::endl;
            } else if (dynamic_cast<const Camion*>(vehicule)) {
                fichier << "camion " << dynamic_cast<const Camion*>(vehicule)->getCapaciteCharge() << std::endl;
            }
        }
        std::cout << "Données sauvegardées avec succès dans " << nomFichier << std::endl;
    } else {
        std::cerr << "Erreur: Impossible d'ouvrir le fichier pour sauvegarder." << std::endl;
    }
}

void ParcAuto::chargerDepuisFichier(const std::string& nomFichier) {
    std::ifstream fichier(nomFichier);
    if (fichier.is_open()) {
        std::string modele, typeCarburant;
        int annee, kilometrage, capaciteCharge;
        bool disponible;

        while (fichier >> modele >> annee >> kilometrage >> disponible) {
            std::string type;
            fichier >> type;

            if (type == "voiture") {
                fichier >> typeCarburant;
                ajouterVehicule(new Voiture(modele, annee, kilometrage, typeCarburant));
            } else if (type == "camion") {
                fichier >> capaciteCharge;
                ajouterVehicule(new Camion(modele, annee, kilometrage, capaciteCharge));
            } else {
                std::cerr << "Erreur: Type de véhicule inconnu dans le fichier." << std::endl;
            }
        }
        std::cout << "Données chargées avec succès depuis " << nomFichier << std::endl;
    } else {
        std::cerr << "Erreur: Impossible d'ouvrir le fichier pour charger." << std::endl;
    }
}
