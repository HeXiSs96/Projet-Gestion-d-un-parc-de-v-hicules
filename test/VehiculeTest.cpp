// VehiculeTest.cpp
#include <iostream>
#include "Vehicule.hpp"

void testVehicule() {
    std::cout << "Test de la classe Vehicule" << std::endl;

    // Création d'un véhicule
    Vehicule v("Modèle1", 2020, 10000, true);
    v.afficherInfo();

    // Test des setters et getters
    v.setModele("Modèle2");
    v.setAnnee(2022);
    v.setKilometrage(12000);
    v.setDisponible(false);

    std::cout << "\nAprès modification:" << std::endl;
    v.afficherInfo();
}

int main() {
    testVehicule();
    return 0;
}
