/**
* \file gridManager.c
* \author Alan B.
* \version 1.0
* \date 25/11/2018
*
* Fichier contenant la grille et ces propri�t�s
*/

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#ifndef GRID_MANAGER_H
#define GRID_MANAGER_H
/**
Structure d�signant un composant sur la grille
*/
typedef struct Component Component;
struct Component {
    int id;
    /**Position en X du composant*/
    int posX;
    /**Position en Y du composant*/
    int posY;
    /**Id du module point�*/
    int idModule;

    /**Tension du composant*/
    int voltage;
    /**Courant actuel du composant*/
    int intensity;
    /**Resistance du composant*/
    int resistor;

    /**Etat du module (anticip�)*/
    int stateModule;
};
/**
Structure qui d�signe la grille et ses propri�t�s
*/
typedef struct Grid_Manager Grid_Manager;
struct Grid_Manager {

    /**Niveau de zoom actuel*/
    int zoomLevel;
    /**Nombre de composant sur la grille*/
    int nbComponents;
    /**Liste des composants*/
    Component* components;

};

#endif // GRID_MANAGER_H
