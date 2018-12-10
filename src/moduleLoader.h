/**
* \file moduleLoader.c
* \author Alan B
*\version 1.2
*\date 10/12/2018
*
* Fichier g�rant les modules du programme
*/

#include <SDL2/SDL.h>
#include <stdlib.h>

#include "ressources.h"
#include "datas/commons_datas.h"
#include "modules/mGenerator.h"

/**
Initialise les donn�es des modules
*/
Module* initModules();
/**
Initialise les donn�es de la grille
*/
void gridInit(Datas * datas);
/**
Action � r�aliser lors d'un clique sur la grille
*/
void onClickComponent(SDL_MouseButtonEvent mEvent, Datas* datas, Component component);
/**
Ajoute le composant sur la grille
*/
void addComponentOnGrid(Datas * datas, Component component);
/**
Supprime le composant  (selon ses coordonn�es) de la grille
*/
void removeComponentOnGrid(Datas * datas, Component component);

/**
Dessine l'ensemble des �l�ments de la grille
*/
void renderComponents(SDL_Renderer* rendererP, Datas datas);
/**
Affiche le module identifi� par id dans la barre des modules
*/
void showBtModule(SDL_Renderer* rendererP,SDL_Rect currentMod, Datas datas, int id);

