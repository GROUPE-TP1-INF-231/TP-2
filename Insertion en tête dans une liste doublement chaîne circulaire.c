#include<stdio.h>
#include<stdlib.h>

//defini la structure pour une cellule
typedef struct Cellule{
	 int valeur;
	 struct Cellule*suiv;
	 struct Cellule* prec;
}Cellule;

// Definitio d'une structure pour une liste circulaire
typedef struct Liste{
	Cellule* tete;
}Liste;

// creation d'une nouvelle Cellule

Cellule* CreationCellule( int valeur){

  Cellule* NouvelCellule=(Cellule*) malloc(sizeof(Cellule));
  NouvelCellule->valeur=valeur;
  NouvelCellule->suiv=NouvelCellule; // Pointe vers lui meme
  NouvelCellule->prec=NouvelCellule; // Pointe vers lui meme
  return NouvelCellule;

}

//Fonction pour inserer une Cellule en tete de la liste

void insertion_en_tete(Liste *liste, int valeur){

	 Cellule*NouvelCellule=CreationCellule(valeur);
	 if(liste->tete==NULL){
	 	liste->tete=NouvelCellule; // la liste etait vide
	 }
	 else{
	 	Cellule*queu=liste->tete->prec; // derniere Cellule
	 	NouvelCellule->suiv=liste->tete;
	 	NouvelCellule->prec=queu;
	 	queu->suiv=NouvelCellule;
	 	liste->tete->prec=NouvelCellule;
	 }

	 liste->tete=NouvelCellule;
}

//fonction pour afficher la liste
void AficherListe(Liste*liste){

	 if(liste->tete==NULL) return;
	 	Cellule* courant=liste->tete;
	 
	 	do{
	 		printf(" %d", courant->valeur);
	 		courant= courant->suiv;
	 	}while (courant !=liste->tete);
	 	printf("\n");
	 }

	 // fonction principal

	 int main(){

       Liste liste;// crear une liste
       liste.tete=NULL; // Initialisation de la tete a null

       int n, valeur;
        // demande a l'utilisdateur d'entrer combien d'element il souhaite ajouter
       printf(" Combien d'element voulez-vous ajouter a la liste ? : ");
       scanf(" %d", &n);

       //Bouycle pour inserer les element en tete
        for( int i=0; i<n; i++){
        	printf(" Entrez l'element %d: ", i+1);
        	scanf("%d", &valeur);
        	insertion_en_tete(&liste,valeur);

        }
        // Afficher l liste

        printf(" Liste apres l'insertion des element a la liste.\n");
        AficherListe(&liste);

          return 0;

	 }
