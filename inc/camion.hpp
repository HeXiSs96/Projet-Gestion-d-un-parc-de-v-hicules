// Camion.hpp
#ifndef CAMION_HPP
#define CAMION_HPP

#include "Vehicule.hpp"

class Camion : public Vehicule {
private:
    int capaciteCharge;

public:
    Camion();
    Camion(const std::string& modele, int annee, int kilometrage, int capaciteCharge, bool disponible = true);
    Camion(const Camion& autre);
    ~Camion();

    int getCapaciteCharge() const;
    void setCapaciteCharge(int capacite);

    void afficherInfo() const override;
};

#endif
