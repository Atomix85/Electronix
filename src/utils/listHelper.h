#ifndef H_LIST_CHAINED
#define H_LIST_CHAINED

#include "../datas/commons_datas.h"



/** Convertie la liste chain�e en un tableau (pr�-allou�) par le nombre d'item */
void listToArray( ItemComponent* start, Component * components);

/** Change la valeur de la reversit� du composant associ� � id */
void reverseComponent(Datas *datas,int id);

/** Change la valeur sp�cifique du composant associ� � id par value */
void setSpecificDataComponent(Datas *datas, int id, double value);

/** Ajoute un itemComponent dans la liste start */
void addItem(ItemComponent** start, Component component);

/** Obtient l'itemComponent associ� � la position x et y de
la liste start. Renvoie NULL si inexistant.
 */
ItemComponent* getComponentByPos(ItemComponent* start, int x, int y);
/** Supprime l'�l�ment associ� � l'ID id */
ItemComponent *removeItemAt(ItemComponent *start, int id);

#endif // H_LIST_CHAINED
