# Gestion parc de véhicules

Ce projet consiste en un système de gestion de parc de véhicules développé en C++. Il permet de gérer un ensemble de véhicules (voitures, camions, etc.) avec des fonctionnalités telles que l'ajout, la suppression, la recherche, l'affichage des informations des véhicules, et la gestion de leur disponibilité.

## 🌟 Fonctionnalités

- Ajout de véhicules : Permet d'ajouter des véhicules au parc, qu'ils soient des voitures ou des camions, en renseignant des informations telles que le modèle, l'année, le kilométrage, et des informations spécifiques comme le type de carburant pour les voitures ou la capacité de charge pour les camions.

- Suppression de véhicules : Offre la possibilité de supprimer un véhicule en fonction de son modèle, ce qui met à jour le parc en conséquence.

- Affichage de la liste des véhicules : Affiche les informations complètes de tous les véhicules présents dans le parc, avec des détails sur leur statut (disponible ou en maintenance).

- Recherche de véhicules : Permet de rechercher un véhicule par son modèle et d'afficher ses informations détaillées.

- Gestion de la disponibilité : Permet de mettre un véhicule en maintenance ou de le retirer de la maintenance, ce qui met à jour son statut de disponibilité.

- Sauvegarde et Chargement des données : Le parc de véhicules peut être sauvegardé dans un fichier et chargé depuis ce même fichier pour une gestion persistante des données.

## 🚗 Types de véhicules gérés
- Voitures : Chaque voiture est associée à un modèle, une année, un kilométrage et un type de carburant.
- Camions : Chaque camion a des caractéristiques similaires à celles des voitures, avec l'ajout de la capacité de charge.

## 💡 Architecture du projet
Le projet est structuré autour de la programmation orientée objet (POO). Les classes principales sont :

- Vehicule : Classe de base représentant un véhicule avec des attributs communs à tous les véhicules (modèle, année, kilométrage, disponibilité).
- Voiture : Hérite de la classe Vehicule et ajoute la gestion du type de carburant.
- Camion : Hérite également de la classe Vehicule et ajoute la gestion de la capacité de charge.
- ParcAuto : Classe gérant la collection de véhicules, permettant l'ajout, la suppression, la recherche et la gestion de l'état des véhicules.

  ![image](https://github.com/user-attachments/assets/95de8e48-2cb3-47f5-9510-08cf019b4ef2)

## 🛠 Technologies utilisées

- **Langage** : C++
- **Environnement de développement** : WSL Ubuntu
- **Compilateur** : g++

## 📦 Installation et utilisation

### Prérequis

- C++17 ou plus récent

### Instructions

#### 1. Cloner le projet

```bash
git clone https://github.com/HeXiSs96/Projet-Gestion-d-un-parc-de-vehicules.git
cd Projet-Gestion-d-un-parc-de-vehicules
```
## Compilation et execution du projet
```bash
g++ -o projet main.cpp Vehicule.cpp Voiture.cpp Camion.cpp ParcAuto.cpp -std=c++17 -Wall
./projet
```
