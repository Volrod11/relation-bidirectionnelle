/**
 * @file Individu.h
 * @author A.Guillaume (you@domain.com)
 * @brief Specifie classe individu en relation reciproque avec la classe Voiture
 * @details ce fichier decrit une classe Individu
 * 
 * un Individu est decrit par un nom, prenom et une Voiture
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief Represente un individu a partir de son nom, prenom et Voiture
 * @warning un Individu ne peut conduire qu'une seule Voiture
 * 
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief le nom de l'individu
   * 
   */
    string nom;         // Le nom de l'individu
    /**
     * @brief le prenom de l'individu
     * 
     */
    string prenom;      // Le prénom de l'individu
    /**
     * @brief lien avec la Voiture de l'Individu
     * 
     */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partir de son nom et de son prenom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief retourne l'identité de l'Individu
     * 
     * @return chaine sous forme "nom prenom"
     * @bug un espace en trop entre le nom et le prenom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    /**
     * @brief definit la Voiture conduite par l'Individu
     * 
     * @param (in) voiture un pointeur vers l'objet Voiture conduit par l'Individu
     */
    void majMaVoiture(Voiture* voiture);
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H