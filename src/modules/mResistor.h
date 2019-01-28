#include "SDL2/SDL.h"

#include "../datas/commons_datas.h"
#include "../datas/gridManager.h"
#include "../utils/gridHelper.h"

/** Dessine une r�sistance */
void resistor_drawComponent(SDL_Rect currentRect, Component currentComponent,int idTex,SDL_Renderer * rendererP,
                   Datas datas);
/** G�re le dessin de la r�sistance quand la r�sistance est � 90�  */
void turnInfo(int size, SDL_Rect currentComp ,SDL_Rect *bar);

/** D�finie la couleur d'apr�s le code couleur */
void setColorFromInt(SDL_Renderer* renderP, int colorCode);
