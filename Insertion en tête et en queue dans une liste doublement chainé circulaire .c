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
        return tete; 
    }

    nv->v = v; 
    nv->suiv = nv; 
    nv->prec = nv; 

    if (tete == NULL) {
        return nv; 
    }


    cellule* queue = tete->prec; 
    nv->suiv = tete; 
    nv->prec = queue; 

    queue->suiv = nv; 
    tete->prec = nv; 

    return tete; 
}

void Afficher(cellule* tete) {
    cellule* courant = tete;
    if (courant != NULL) {
        do {
            printf("%d ", courant->v); 
            courant = courant->suiv; 
        } while (courant != tete); 
        printf("\n");
    }
}

int main() {
    int i, n;
    int v;
    cellule* tete = NULL; 
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
        tete = insertQueue(tete, v); 
    }
    Afficher(tete); 
    return 0;
}
