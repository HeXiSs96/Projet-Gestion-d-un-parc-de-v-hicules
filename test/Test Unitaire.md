## 1. ParcAutoTest.cpp
### Rôle :

 - Tester la classe ParcAuto, qui gère une collection de véhicules.
   
### Ce qu'il teste :

 - 1. Ajout de véhicules au parc :
   
      - Appel de ajouterVehicule pour ajouter une instance de Voiture et une instance de Camion.
        
 - 2. Affichage des véhicules :
   
      - Appel de afficherParc pour vérifier que les informations des véhicules ajoutés sont correctement affichées.
        
  - 3. Recherche de véhicules :
    
      - Appel de rechercherVehiculeParModele pour vérifier qu'un véhicule peut être retrouvé par son modèle.
        
  - 4. Comptage des véhicules disponibles :
    
      - Appel de vehiculeDisponible pour s'assurer que le nombre de véhicules disponibles est correctement calculé.
        
## 2. CamionTest.cpp
Rôle :
Tester la classe Camion, qui représente un véhicule de type camion.
Ce qu'il teste :
Création et affichage d'un camion :
Vérifie que les informations d'un camion sont correctement initialisées et affichées via afficherInfo.
Modification de la capacité de charge :
Appel de setCapaciteCharge pour changer la capacité de charge du camion.
Vérifie avec un nouvel appel à afficherInfo que la modification est prise en compte.
3. VehiculeTest.cpp
Rôle :
Tester la classe de base Vehicule, dont héritent les autres types de véhicules.
Ce qu'il teste :
Création et affichage d'un véhicule :
Vérifie que les attributs (modèle, année, kilométrage, disponibilité) d'un véhicule sont correctement initialisés et affichés via afficherInfo.
Modification des attributs :
Appel des méthodes setModele, setAnnee, setKilometrage, et setDisponible pour modifier les propriétés du véhicule.
Vérifie que les modifications sont correctement appliquées via un nouvel appel à afficherInfo.
4. VoitureTest.cpp
Rôle :
Tester la classe Voiture, qui hérite de Vehicule et ajoute des fonctionnalités spécifiques.
Ce qu'il teste :
Création et affichage d'une voiture :
Vérifie que les informations d'une voiture (incluant le type de carburant) sont correctement initialisées et affichées via afficherInfo.
Modification du type de carburant :
Appel de setTypeCarburant pour changer le type de carburant de la voiture.
Vérifie que la modification est correctement appliquée via un nouvel appel à afficherInfo.
Résumé des méthodes testées par fichier :
Fichier	Méthodes testées
ParcAutoTest.cpp	ajouterVehicule, afficherParc, rechercherVehiculeParModele, vehiculeDisponible
CamionTest.cpp	afficherInfo, setCapaciteCharge
VehiculeTest.cpp	afficherInfo, setModele, setAnnee, setKilometrage, setDisponible
VoitureTest.cpp	afficherInfo, setTypeCarburant
