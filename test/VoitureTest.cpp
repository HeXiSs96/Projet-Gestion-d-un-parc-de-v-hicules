// VoitureTest.cpp
#include <iostream>
#include "Voiture.hpp"

void testVoiture() {
    std::cout << "Test de la classe Voiture" << std::endl;

    // Création d'une voiture
    Voiture v("Peugeot", 2021, 15000, "Essence");
    v.afficherInfo();

    // Test des setters et getters
    v.setTypeCarburant("Diesel");
    std::cout << "\nAprès modification du carburant:" << std::endl;
    v.afficherInfo();
}

int main() {
    testVoiture();
    return 0;
}
