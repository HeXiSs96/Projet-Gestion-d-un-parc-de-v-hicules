// Vehicule.hpp
#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <string>
#include <iostream>

class Vehicule {
private:
    std::string modele;
    int annee;
    int kilometrage;
    bool disponible;

public:
    Vehicule();
    Vehicule(const std::string& modele, int annee, int kilometrage, bool disponible = true);
    Vehicule(const Vehicule& autre);
    virtual ~Vehicule();

    std::string getModele() const;
    void setModele(const std::string& mod);
    int getAnnee() const;
    void setAnnee(int an);
    int getKilometrage() const;
    void setKilometrage(int km);
    bool isDisponible() const;
    void setDisponible(bool dispo);

    virtual void afficherInfo() const;
    void mettreEnMaintenance();
    void retirerDeMaintenance();
    void parcourir(int km);
};

#endif
