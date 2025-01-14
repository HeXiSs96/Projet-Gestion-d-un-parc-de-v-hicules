// ParcAutoTest.cpp
#include <iostream>
#include "ParcAuto.hpp"
#include "Voiture.hpp"
#include "Camion.hpp"

void testParcAuto() {
    std::cout << "Test de la classe ParcAuto" << std::endl;

    // Création d'un parc automobile
    ParcAuto parc;

    // Ajout de véhicules
    parc.ajouterVehicule(new Voiture("Voiture1", 2019, 20000, "Essence"));
    parc.ajouterVehicule(new Camion("Camion1", 2018, 40000, 5000));

    // Affichage de tous les véhicules
    parc.afficherParc();

    // Recherche d'un véhicule
    parc.rechercherVehiculeParModele("Camion1");

    // Nombre de véhicules disponibles
    std::cout << "\nNombre de véhicules disponibles: " << parc.vehiculeDisponible() << std::endl;
}

int main() {
    testParcAuto();
    return 0;
}
