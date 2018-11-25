/**
* \file modules.h
* \author Alan B.
* \version 1.0
* \date 25/11/2018
*
* Fichier contenant la structure d'un module
*/
#ifndef MODULE_LOADER
#define MODULE_LOADER

/**
Structure d'un module
*/
typedef struct Module Module;
struct Module{

    /**
    \deprecated

    Id du module*/
    int id;
    /**Id de la texture du texte associ�e*/
    int idTextTex;
    /**Id de la texture icone associ�e*/
    int idTex;

};

#endif // MODULE_LOADER
