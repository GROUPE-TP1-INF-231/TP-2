//insertion en tête dans une liste doublement chainé circulaire
void insertHead(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        Node* tail = head->prev;
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head->prev = newNode;
        head = newNode;
    }
}

void display() {
    if (head == NULL) {
        printf("Liste vide\n");
        return;
    }
    Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);int main() {
    insertHead(10);  
    display();

    insertHead(20); 
    display();

    insertHead(30);  
    display();

    return 0;
}
    printf("\n");
}

// insertion en queue dans une liste doublement chainé circulaire 

#include <stdio.h>
#include <stdlib.h>

typedef struct cellule {
    int v;
    struct cellule* suiv;
    struct cellule* prec;
} cellule;

typedef struct Liste {
    cellule* tete;
} Liste;

// Fonction d'insertion en queue de la liste
cellule* insertQueue(cellule* tete, int v) {
    cellule* nv = (cellule*)malloc(sizeof(cellule));  
    if (nv == NULL) {
        printf("Allocation impossible\n");
        return tete; // Retourne la liste inchangee en cas d'échec d'allocation
    }

    nv->v = v; // Initialise la valeur du nouveau nœud
    nv->suiv = nv; // Initialisation de la liaison circulaire
    nv->prec = nv; // Initialisation de la liaison circulaire

    if (tete == NULL) {
        return nv; // Si la liste est vide, le nouveau nœud devient la tete
    }

    // Inserer le nouveau nœud a la fin
    cellule* queue = tete->prec; // Obtient le dernier nœud
    nv->suiv = tete; // Le nouveau nœud pointe vers la tete
    nv->prec = queue; // Definit le pointeur precedent du nouveau nœud

    queue->suiv = nv; // Met a jour le suivant du dernier nœud
    tete->prec = nv; // Met a jour le précédent de la tete

    return tete; // Retourne la tete de la liste
}

void Afficher(cellule* tete) {
    cellule* courant = tete;
    if (courant != NULL) {
        do {
            printf("%d ", courant->v); // Affiche la valeur du nœud
            courant = courant->suiv; // Passe au nœud suivant
        } while (courant != tete); // Continue jusqu'a revenir a la tete
        printf("\n");
    }
}

int main() {
    int i, n;
    int v;
    cellule* tete = NULL; // Initialise la tete a NULL
for(int i=0;i<n;i++){
Printf("Donner le nombre d'elément a inserer en tête :");
Scanf("%d",&n);
Tete=InsertHead(&tete,v);
}
Afficher (tete);

    printf("Donner le nombre d'elements a inserer a la fin : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Entrez la valeur %d : ", i + 1);
        scanf("%d", &v);
        tete = insertQueue(tete, v); // Met a jour la tete avec la nouvelle liste
    }
    Afficher(tete); // Affiche la liste
    return 0;
}