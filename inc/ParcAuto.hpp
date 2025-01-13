#ifndef PARCAUTO_HPP
#define PARCAUTO_HPP

#include <vector>
#include "Vehicule.hpp"
#include <fstream>  // Ajout pour gérer les fichiers

class ParcAuto {
private:
    std::vector<Vehicule*> vehicules;

public:
    ~ParcAuto();
    void ajouterVehicule(Vehicule* vehicule);
    void supprimerVehicule(const std::string& modele);
    void afficherParc() const;
    void rechercherVehiculeParModele(const std::string& modele) const;
    int vehiculeDisponible() const;
    void mettreVehiculeEnMaintenance(const std::string& modele);
    void retirerVehiculeDeMaintenance(const std::string& modele);

    // Méthodes pour sauvegarder et charger depuis un fichier
    void sauvegarderDansFichier(const std::string& nomFichier) const;
    void chargerDepuisFichier(const std::string& nomFichier);
};

#endif
