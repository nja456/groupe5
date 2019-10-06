#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "chauffeur.h"


chauffeur enregistrerChauffeur(int nbrech)
{
	
  chauffeur ch;
	printf("entrer le nom: \n");
	scanf("%s",ch.nom);
	printf("entrer le prenom: \n");
	scanf("%s",ch.prenom);
	printf("entrer le matricule:\n");
	scanf("%s",ch.matricule);
	printf("entrer le contact: \n");
	scanf("%s",ch.contact);
  printf("entrer le salaire: \n");
  scanf("%d",&ch.salaire);
  printf("enregistrement effectuer\n");
  
    return ch;
    }

chauffeur* rechercherChauffeur(chauffeur *t, char mat[])
{

  for(int i=0 ; i< t->nbrech ; i++){
  	if (strcmp(mat,t->matricule+i)==0){
  		return (t+i);
  	}
  }
  return NULL;
}

void afficherChauffeur(chauffeur ch)
{
   printf("NOM: %s\n",ch.nom );
   printf("PRENOM: %s\n",ch.prenom );
   printf("MATRICULE: %s\n",ch.matricule);
   printf("CONTACT: %s\n",ch.contact);
   printf("salaire: %d\n",ch.salaire);
  
}
void modifierChauffeur(chauffeur *ch, chauffeur c)
{
  ch->nbrech=c.nbrech;
  strcpy(ch->nom, c.nom);
  strcpy(ch->prenom, c.prenom);
  strcpy(ch->matricule, c.matricule);
  strcpy(ch->contact, c.contact);
  ch->salaire=c.salaire;
  
}