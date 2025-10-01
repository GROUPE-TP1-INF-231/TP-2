#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* creerNoeud(int val) {
    struct Node* nouveau = (struct Node*)malloc(sizeof(struct Node));
    if (nouveau == NULL) {
        printf("Erreur d'allocation memoire.\n");
        exit(1);
    }
    nouveau->data = val;
    nouveau->next = nouveau;
    return nouveau;
}

int estVide(struct Node* tete) {
    return (tete == NULL);
}

void insertionTete(struct Node** tete, int val) {
    struct Node* newNode = creerNoeud(val);

    if (estVide(*tete)) {
        *tete = newNode;
    } else {
        struct Node* temp = *tete;
        while (temp->next != *tete) temp = temp->next;
        temp->next = newNode;
        newNode->next = *tete;
        *tete = newNode;
    }
}

void insertionQueue(struct Node** tete, int val) {
    struct Node* nouveau = creerNoeud(val);

    if (*tete == NULL) {
        *tete = nouveau;
    } else {
        struct Node* temp = *tete;
        while (temp->next != *tete) {
            temp = temp->next;
        }
        temp->next = nouveau;
        nouveau->next = *tete;
    }
}

void afficherListe(struct Node* tete) {
    if (tete == NULL) {
        printf("Liste vide.\n");
        return;
    }
    struct Node* temp = tete;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tete);
    printf("(retour a %d)\n", tete->data);
}

int main() {
    struct Node* tete = NULL;

    insertionTete(&tete, 2);
    insertionTete(&tete, 1);

    printf("\nListe circulaire apres insertions en tete :\n");
    afficherListe(tete);
    
    
    insertionQueue(&tete, 10);
    insertionQueue(&tete, 20);

    printf("Liste circulaire apres insertions en queue :\n");
    afficherListe(tete);

    return 0;
} 
