#include <stdio.h>
#include <stdlib.h>

// Structure pour une cellule de la liste simplement chaînée 
typedef struct cellule {
    int data;
    struct cellule* suiv;
} cellule;

// Fonction pour créer une nouvelle cellule 
cellule* createcellule(int valeur) {
    cellule* nouveau = (cellule*) malloc(sizeof(cellule));
    if (!nouveau) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    nouveau->data = valeur;
    nouveau->suiv = NULL;
    return nouveau;
}

// Insérer un élément dans une liste triée 
void insertionTrie(cellule**tete, int valeur) {
    cellule* nouveau = createcellule(valeur);

    // Cas 1 : la liste est vide
    if (*tete == NULL) {
        *tete = nouveau;
        return;
    }

    cellule* courant = *tete;

    // Cas 2 : insérer avant le premier élément si plus petit
    if (valeur < courant->data) {
        nouveau->suiv = courant;
        *tete = nouveau;
        return;
    }

    // Cas 3 : trouver la position correcte
    while (courant->suiv != NULL && courant->suiv->data < valeur) {
        courant = courant->suiv;
    }

    // Insérer après courant
    nouveau->suiv = courant->suiv;
    courant->suiv = nouveau;
}

// Fonction pour afficher la liste en avant 
void afficherAvant(cellule* tete) {
    cellule* temp = tete;
    printf("Liste (avant) : ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->suiv;
    }
    printf("NULL\n");
}

// Fonction pour afficher la liste en arrière (récursif)
void afficherArriere(cellule* tete) {
    if (tete == NULL) return;
    afficherArriere(tete->suiv);
    printf("%d -> ", tete->data);
}

// Programme principal
int main() {
    cellule* tete = NULL;

    // Insertion d'éléments 
    insertionTrie(&tete, 30);
    insertionTrie(&tete, 10);
    insertionTrie(&tete, 50);
    insertionTrie(&tete, 20);
    insertionTrie(&tete, 40);

    // Affichage 
    afficherAvant(tete);
    printf("Liste (arrière) : ");
    afficherArriere(tete);
    printf("NULL\n");

    return 0;
}