#include <stdio.h>
#include <stdlib.h>

// Definition de la structure pour une cellule
typedef struct Cellule {
    int valeur;
    struct Cellule* suiv;
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
    return nouvelleCellule;
}

// Fonction pour inserer une cellule a la fin de la liste
void InsererFin(Liste* liste, int valeur) {
    Cellule* nouvelleCellule = CreationCellule(valeur);
    if (liste->tete == NULL) {
        liste->tete = nouvelleCellule; // La liste etait vide
    } else {
        Cellule* courant = liste->tete;
        while (courant->suiv != NULL) {
            courant = courant->suiv; // Parcours jusqu'a la fin de la liste
        }
        courant->suiv = nouvelleCellule; // Ajout a la fin
    }
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

// Fonction pour supprimer toutes les occurrences d'un element
void SupprimerOccurrences(Liste* liste, int valeur) {
    Cellule* courant = liste->tete;
    Cellule* precedent = NULL;

    while (courant != NULL) {
        if (courant->valeur == valeur) {
            // Si la cellule a supprimer est la tete
            if (precedent == NULL) {
                liste->tete = courant->suiv; // Met a jour la tete de la liste
                free(courant);
                courant = liste->tete; // Met a jour courant
            } else {
                // Supprime la cellule
                precedent->suiv = courant->suiv;
                free(courant);
                courant = precedent->suiv; // Met a jour courant
            }
        } else {
            precedent = courant;
            courant = courant->suiv; // Avance dans la liste
        }
    }
}

// Fonction principale
int main() {
    Liste liste;
    liste.tete = NULL; // Initialisation de la tete a NULL

    int n, valeur;
    printf("Combien d'elements voulez-vous ajouter a la liste ? : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &valeur);
        InsererFin(&liste, valeur);
    }

    printf("Liste avant la suppression :\n");
    AfficherListe(&liste);

    printf("Entrez l'element a supprimer : ");
    scanf("%d", &valeur);
    SupprimerOccurrences(&liste, valeur);

    printf("Liste apres la suppression :\n");
    AfficherListe(&liste);

    return 0;
}