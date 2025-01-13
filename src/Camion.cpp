// Camion.cpp
#include "Camion.hpp"

Camion::Camion() : Vehicule(), capaciteCharge(0) {}

Camion::Camion(const std::string& modele, int annee, int kilometrage, int capaciteCharge, bool disponible)
    : Vehicule(modele, annee, kilometrage, disponible), capaciteCharge(capaciteCharge) {}

Camion::Camion(const Camion& autre) : Vehicule(autre), capaciteCharge(autre.capaciteCharge) {}

Camion::~Camion() {}

int Camion::getCapaciteCharge() const {
    return capaciteCharge;
}

void Camion::setCapaciteCharge(int capacite) {
    capaciteCharge = capacite;
}

void Camion::afficherInfo() const {
    Vehicule::afficherInfo();
    std::cout << "Capacité de charge: " << capaciteCharge << " kg" << std::endl;
}
