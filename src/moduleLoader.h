/**
* \file moduleLoader.c
* \author Alan B
*\version 1.0
*\date 25/11/2018
*
* Fichier g�rant les modules du programme
*/

#include <SDL2/SDL.h>

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

/**V�rifie que l'emplacement x et y est libre*/
int isEmpty(Datas * datas, int x, int y);

/**
Affiche le module identifi� par id dans la barre des modules
*/
void showBtModule(SDL_Renderer* rendererP,SDL_Rect currentMod, Datas datas, int id);

