#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "vehicule.h"
#include <conio.h>


char t[10];
int nbrech,nbre_v=1;
int rep;
int Menu();



int main()
{
do{
		vehicule *veh=NULL;
		veh=malloc(nbre_v*sizeof(vehicule));
		veh->listechauffeur=malloc(nbrech*sizeof(chauffeur));
		int f=Menu();
	if(f==1)
	{
		veh[nbre_v-1]=enregistrerVehicule();
		printf("Ajouter chauffeur\n");
		veh[nbre_v-1].listechauffeur[nbrech-1] = enregistrerChauffeur();
		nbre_v++;
		nbrech++;
		veh=realloc(veh,nbre_v*sizeof(vehicule));
		veh->listechauffeur=realloc(veh->listechauffeur,nbrech*sizeof(chauffeur));
		
		
	} else if(f==2)
	{
		vehicule vehi;
		printf("Entrez l'immatriculation de la voiture\n:" );
		scanf("%s",t);
		vehi=RechercherVehicule(veh, t, nbre_v);
		afficherVehicule(&vehi);
	} else if(f==3)
	{
		
		vehicule vehi;
		printf("Entrez l'immatriculation de la voiture\n:" );
		scanf("%s",t);
		vehi=RechercherVehicule(veh, t, nbre_v);
		vehicule vehis=enregistrerVehicule(nbre_v);
		modifierVehicule(&vehi, vehis);
}
	
printf("voulez vous continuer\n \ttaper 1 si oui");
scanf("%d",&rep);
system ("cls");
}while(rep==1);
	return 0;
}

int Menu()
{
	int choix;
	do{
		printf("--------------------------------------------------------------------\n");
		printf("Tapez :\n1- Ajouter Vehicule\n2- Afficher vehicule\n");
		printf("3- Modifier Vehicule \n  Choix\n");
		scanf("%d",&choix);
	}while(choix<0 || choix>3);
	return choix;

}
