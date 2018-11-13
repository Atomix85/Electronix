#include "layoutLoader.h"

int initLayout(SDL_Renderer* rendererP, Datas* datas){

    if(!initTextures(rendererP, datas) |
       initTexsTex(rendererP, datas)){
        return 0;
    }
    return 1;
}
int initTextures(SDL_Renderer* rendererP, Datas* datas){

    int i;
    int nbTex = sizeof(datas->surfaces->images) / sizeof(SDL_Surface*);
    datas->textures->images = malloc(sizeof(SDL_Texture*) * nbTex);

    for(i = 0; i < nbTex; i++){
        datas->textures->images[i] = SDL_CreateTextureFromSurface(rendererP,
                                                        datas->surfaces->images[i]);
        if(!datas->textures->images[i]){
            fprintf(stderr,"Texture Creation Error :/ -> %s\n",SDL_GetError());
            return 0;
        }
    }
    return 1;
}
int initTexsTex(SDL_Renderer* rendererP, Datas* datas){

    int i;
    int nbTex = sizeof(datas->surfaces->texts) / sizeof(SDL_Surface*);
    datas->textures->texts = malloc(sizeof(SDL_Texture*) * nbTex);

    for(i = 0; i < nbTex; i++){
        datas->textures->texts[i] = SDL_CreateTextureFromSurface(rendererP,
                                                                 datas->surfaces->texts[i]);
        if(!datas->textures->texts[i]){
            fprintf(stderr,"Texts Creation Error :/ -> %s\n",SDL_GetError());
            return 0;
        }
    }
    return 1;
}
int update(SDL_Window* windowP, SDL_Renderer* rendererP, Datas datas){
    conception_update(windowP, rendererP, datas);
}
int destroyTextures(Datas datas){
    int i;
    for(i = 0; i < sizeof(datas.textures->images) / sizeof(SDL_Texture*); i++){
        SDL_DestroyTexture(datas.textures->images[i]);
    }
    free(datas.textures->images);
    for(i = 0; i < sizeof(datas.textures->texts) / sizeof(SDL_Texture*); i++){
        SDL_DestroyTexture(datas.textures->texts[i]);
    }
    free(datas.textures->images);
    TTF_CloseFont(datas.font);
}