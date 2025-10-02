#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node* creerNoeud(int val) {
    struct Node* nouveau = (struct Node*)malloc(sizeof(struct Node));
    if (nouveau == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        exit(1);
    }
    nouveau->data = val;
    nouveau->next = nouveau;
    nouveau->prev = nouveau;
    return nouveau;
}

int estVide(struct Node* tete) {
    return (tete == NULL);
}

void insertionTete(struct Node** tete, int val) {
    struct Node* nouveau = creerNoeud(val);

    if (estVide(*tete)) {
        *tete = nouveau;
    } else {
        struct Node* dernier = (*tete)->prev;
        nouveau->next = *tete;
        nouveau->prev = dernier;
        dernier->next = nouveau;
        (*tete)->prev = nouveau;
        *tete = nouveau; 
    }
}

void insertionQueue(struct Node** tete, int val) {
    struct Node* nouveau = creerNoeud(val);

    if (estVide(*tete)) {
        *tete = nouveau;
    } else {
        struct Node* dernier = (*tete)->prev;
        nouveau->next = *tete;
        nouveau->prev = dernier;
        dernier->next = nouveau;
        (*tete)->prev = nouveau;
    }
}

void afficherListe(struct Node* tete) {
    if (tete == NULL) {
        printf("Liste vide.\n");
        return;
    }
    struct Node* temp = tete;
    printf("Parcours avant : ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tete);
    printf("(retour à %d)\n", tete->data);
}

void afficherListeInverse(struct Node* tete) {
    if (tete == NULL) {
        printf("Liste vide.\n");
        return;
    }
    struct Node* temp = tete->prev;
    printf("Parcours arrière : ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    } while (temp != tete->prev);
    printf("(retour à %d)\n", tete->prev->data);
}

int main() {
    struct Node* tete = NULL;

    insertionTete(&tete, 2);
    insertionTete(&tete, 1);

    printf("\nListe après insertions en tête :\n");
    afficherListe(tete);
    afficherListeInverse(tete);

    insertionQueue(&tete, 10);
    insertionQueue(&tete, 20);

    printf("\nListe après insertions en queue :\n");
    afficherListe(tete);
    afficherListeInverse(tete);

    return 0;
}
