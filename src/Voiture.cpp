// Voiture.cpp
#include "Voiture.hpp"

Voiture::Voiture() : Vehicule(), typeCarburant("") {}

Voiture::Voiture(const std::string& modele, int annee, int kilometrage, const std::string& typeCarburant)
    : Vehicule(modele, annee, kilometrage), typeCarburant(typeCarburant) {}

Voiture::Voiture(const Voiture& autre)
    : Vehicule(autre), typeCarburant(autre.typeCarburant) {}

Voiture::~Voiture() {}

std::string Voiture::getTypeCarburant() const {
    return typeCarburant;
}

void Voiture::setTypeCarburant(const std::string& type) {
    typeCarburant = type;
}

void Voiture::afficherInfo() const {
    Vehicule::afficherInfo();
    std::cout << "Type de carburant: " << typeCarburant << std::endl;
}
