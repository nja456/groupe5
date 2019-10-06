#include<stdio.h>
#include<stdlib.h>
#include "vehicule.h"
#include <string.h>




vehicule enregistrerVehicule()
{
	vehicule ve;
	ve.nbre_c=0;
	ve.recette=0;
	printf("entrer l'immatriculation: \n");
	scanf("%s",ve.immat);
	printf("entrer le type: \n");
	scanf("%s",ve.type);
	printf("entrer la couleur: \n");
	scanf("%s",ve.couleur);
	printf("entre la recette: \n");
	scanf("%d",&ve.recette);
	printf("entrer le nombre de chauffeur\n");
	scanf("%d",&ve.nbre_c);
    
	
	printf("enregistrement effectuer\n");
	return ve;
};

vehicule RechercherVehicule(vehicule v[], char immatr[], int nbre)
 {
	for (int i = 0; i < nbre ; i++)
	{
		if (strcmp(immatr,v[i].immat)==0)
		{
			return v[i];
		}
	}
	
 };


void afficherVehicule(vehicule *ve)
 {
   printf("immatriculation: %s\n",ve->immat);
   printf("type: %s\n",ve->type);
   printf("couleur: %s\n",ve->couleur);
   printf("recette: %d\n",ve->recette);
   printf("nombre de chauffeur attribuer au véhicule: %d\n",ve->nbre_c);
   for (int i = 0; i< ve->nbre_c; i++)
   {
   	 printf("chauffeur: %\n", i+1);
   	 afficherChauffeur(ve->listechauffeur[i]);
   }
 };

void modifierVehicule(vehicule *ve, vehicule v)
{
	ve->nbre_c=v.nbre_c;
	strcpy(ve->immat, v.immat);
	strcpy(ve->type, v.type);
	strcpy(ve->couleur, v.couleur);
	ve->recette=v.recette;
	ve->listechauffeur=realloc(ve->listechauffeur, v.nbre_c *sizeof(chauffeur));
}