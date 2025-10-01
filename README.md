README POUR TOUT LES CODES

 1. LIRE UN ELEMENT ET SUPPRIMER TOUTES LES OCCURENCE DANS LA LISTE:
    Ce programme en C gère une liste simplement chaînée et permet à l'utilisateur de supprimer toutes les occurrences d'un élément donné.

Fonctionnement :
Initialisation : Le programme commence par définir des structures pour les cellules et la liste. Chaque cellule contient une valeur et un pointeur vers la cellule suivante.

Création de cellules : Une fonction permet de créer de nouvelles cellules avec une valeur spécifiée.

Insertion d'éléments : L'utilisateur est invité à saisir un nombre d'éléments. Chaque élément est ajouté à la fin de la liste à l'aide d'une fonction d'insertion.

Affichage de la liste : Avant toute opération de suppression, le programme affiche les éléments actuellement présents dans la liste.

Suppression d'occurrences : L'utilisateur saisit une valeur à supprimer. Le programme parcourt la liste et supprime toutes les cellules contenant cette valeur, en ajustant les pointeurs pour maintenir l'intégrité de la liste.

Affichage après suppression : Enfin, le programme affiche la liste mise à jour, montrant que toutes les occurrences de l'élément spécifié ont été supprimées.

2. INSERTION D'UN ÉLÉMENT DANS UNE LISTE SIMPLEMENT CHAÎNEE TRIÉE DE TELLE SORTE QU'ELLE RESTE TRIÉE 
DESCRIPTION : ce programme utilise des fonctions pour 
- créer une nouvelle cellule
- inserer un élément dans une liste triée pour différents cas
- afficher la liste en avant
- afficher la liste en arrière
  BIBLIOTHÈQUES
  <stdio.h>
  <stdio.lib>
  PRÉREQUIS
 . un compilateur c
 . un terminal pour exécuter le programme
  COMPLEXITÉ
  pour n éléments
  - spatiale : o(n)
  - temporelle :o(n²)
