/**
* \file iConception.c
* \author Alan B.
* \date 12/12/2018
* \version 1.5
*
* Fichier qui g�re la page de conception de circuit electrique
*/
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL_ttf.h>

#include "../datas/commons_datas.h"
#include "iLevel.h"
#include "iMenu.h"
#include "iFileManager.h"
#include "../utils/uiEvent.h"
#include "../moduleLoader.h"

/**
Obligatoire : Initialisation de la page (allocation des tableaux UI)
*/
int conception_init(Datas *datas);
/**
Obligatoire : Mise � jour du rendu de la page (affichage des �l�ments UI)
*/
int conception_update(SDL_Window* windowP, SDL_Renderer* renderer, Datas datas);
/**
Obligatoire : Mise � jour de la position des �lements UI et �coute des �venements de ceux ci
*/
int conception_event(SDL_Event event,SDL_Window* windowP,SDL_Renderer* renderer,Datas *datas, int *running);
/**
Obligatoire : Destruction de la page (d�sallocation des tableaux UI)
*/
int conception_end(Datas *datas);
