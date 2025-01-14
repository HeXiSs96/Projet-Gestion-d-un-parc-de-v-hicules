// CamionTest.cpp
#include <iostream>
#include "Camion.hpp"

void testCamion() {
    std::cout << "Test de la classe Camion" << std::endl;

    // Création d'un camion
    Camion c("ModèleCamion", 2020, 30000, 5000);
    c.afficherInfo();

    // Test des setters et getters
    c.setCapaciteCharge(6000);
    std::cout << "\nAprès modification de la capacité de charge:" << std::endl;
    c.afficherInfo();
}

int main() {
    testCamion();
    return 0;
}
