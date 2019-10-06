#ifndef _CHAUFFEUR_h_
#define _CHAUFFEUR_h_
struct chauffeur
{
	char nom[20];
	char prenom[20];
	char matricule[20];
	char contact[20];
	int salaire;
	int nbrech;
};
typedef struct chauffeur chauffeur;

chauffeur  enregistrerChauffeur();
chauffeur* rechercherChauffeur(chauffeur *t, char mat[]);
void afficherChauffeur(chauffeur ch);
#endif