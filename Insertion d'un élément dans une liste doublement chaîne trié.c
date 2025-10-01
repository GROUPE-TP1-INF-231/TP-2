#include <stdio.h>
#include <stdlib.h>

// Definition de la structure pour une cellule
typedef struct Cellule {
    int valeur;
    struct Cellule* suiv;
    struct Cellule* prec;
} Cellule;

// Definition de la structure pour une liste
typedef struct Liste {
    Cellule* tete;
} Liste;

// Fonction pour creer une nouvelle cellule
Cellule* CreationCellule(int valeur) {
    Cellule* nouvelleCellule = (Cellule*)malloc(sizeof(Cellule));
    nouvelleCellule->valeur = valeur;
    nouvelleCellule->suiv = NULL;
    nouvelleCellule->prec = NULL;
    return nouvelleCellule;
}

// Fonction pour inserer un element dans une liste doublement chainee triee
void InsererTrie(Liste* liste, int valeur) {
    Cellule* nouvelleCellule = CreationCellule(valeur);
    
    // Cas où la liste est vide
    if (liste->tete == NULL) {
        liste->tete = nouvelleCellule;
        return;
    }

    Cellule* courant = liste->tete;

    // Cas d'insertion en tete (avant le premier element)
    if (valeur < courant->valeur) {
        nouvelleCellule->suiv = courant;
        courant->prec = nouvelleCellule;
        liste->tete = nouvelleCellule;
        return;
    }

    // Parcours pour trouver la position d'insertion
    while (courant->suiv != NULL && courant->suiv->valeur < valeur) {
        courant = courant->suiv;
    }

    // Insertion entre deux cellules ou a la fin
    nouvelleCellule->suiv = courant->suiv;
    nouvelleCellule->prec = courant;

    if (courant->suiv != NULL) {
        courant->suiv->prec = nouvelleCellule;
    }
    courant->suiv = nouvelleCellule;
}

// Fonction pour afficher la liste
void AfficherListe(Liste* liste) {
    Cellule* courant = liste->tete;
    while (courant != NULL) {
        printf("%d ", courant->valeur);
        courant = courant->suiv;
    }
    printf("\n");
}

// Fonction principale
int main() {
    Liste liste;
    liste.tete = NULL; // Initialisation de la tete a NULL

    int n, valeur;
    printf("Combien d'elements voulez-vous ajouter ? : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &valeur);
        InsererTrie(&liste, valeur);
    }

    printf("Liste triee :\n");
    AfficherListe(&liste);

    return 0;
}