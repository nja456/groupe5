#ifndef _VEHICULE_h_
#define _VEHICULE_h_
#include "chauffeur.h"

struct vehicule
{
	char immat[20];
	char type[20];
	char couleur[20];
	int recette;
	chauffeur *listechauffeur;
	int nbre_c;
};
typedef struct vehicule vehicule;

vehicule enregistrerVehicule();
vehicule RechercherVehicule(vehicule v[],char immatr[],int nbre);
void afficherVehicule(vehicule *ve);
void modifierVehicule(vehicule *ve, vehicule v);


#endif