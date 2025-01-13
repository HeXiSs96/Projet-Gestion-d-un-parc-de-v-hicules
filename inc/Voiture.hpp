// Voiture.hpp
#ifndef VOITURE_HPP
#define VOITURE_HPP

#include "Vehicule.hpp"

class Voiture : public Vehicule {
private:
    std::string typeCarburant;

public:
    Voiture();
    Voiture(const std::string& modele, int annee, int kilometrage, const std::string& typeCarburant);
    Voiture(const Voiture& autre);
    ~Voiture();

    std::string getTypeCarburant() const;
    void setTypeCarburant(const std::string& type);

    void afficherInfo() const override;
};

#endif
