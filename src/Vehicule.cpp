// Vehicule.cpp
#include "Vehicule.hpp"

Vehicule::Vehicule() : modele(""), annee(0), kilometrage(0), disponible(true) {}

Vehicule::Vehicule(const std::string& modele, int annee, int kilometrage, bool disponible)
    : modele(modele), annee(annee), kilometrage(kilometrage), disponible(disponible) {}

Vehicule::Vehicule(const Vehicule& autre)
    : modele(autre.modele), annee(autre.annee), kilometrage(autre.kilometrage), disponible(autre.disponible) {}

Vehicule::~Vehicule() {}

std::string Vehicule::getModele() const {
    return modele;
}

void Vehicule::setModele(const std::string& mod) {
    modele = mod;
}

int Vehicule::getAnnee() const {
    return annee;
}

void Vehicule::setAnnee(int an) {
    annee = an;
}

int Vehicule::getKilometrage() const {
    return kilometrage;
}

void Vehicule::setKilometrage(int km) {
    kilometrage = km;
}

bool Vehicule::isDisponible() const {
    return disponible;
}

void Vehicule::setDisponible(bool dispo) {
    disponible = dispo;
}

void Vehicule::afficherInfo() const {
    std::cout << "Modèle: " << modele << ", Année: " << annee
              << ", Kilométrage: " << kilometrage << " km, Statut: "
              << (disponible ? "Disponible" : "En maintenance") << std::endl;
}

void Vehicule::mettreEnMaintenance() {
    disponible = false;
}

void Vehicule::retirerDeMaintenance() {
    disponible = true;
}

void Vehicule::parcourir(int km) {
    if (!disponible) {
        std::cout << "Erreur: Le véhicule est en maintenance et ne peut pas parcourir de distance." << std::endl;
        return;
    }
    kilometrage += km;
}
