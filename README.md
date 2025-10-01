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
 

3. INSERTION D'UN ELEMENT DANS UNE LISTE DOUBLEMENT CHAINE TRIE

    Ce programme en C gère une liste doublement chaînée triée. Il permet à l'utilisateur d'insérer des éléments dans la liste tout en maintenant l'ordre croissant.
 Fonctionnement :
Structures de données :

    Le programme définit deux structures : Cellule, qui représente un élément de la liste (avec des pointeurs vers la cellule suivante et précédente), et Liste, qui contient un pointeur vers la tête de la liste.
Création de cellules :

   La fonction CreationCellule alloue de la mémoire pour une nouvelle cellule et l'initialise avec une valeur donnée, en fixant ses pointeurs à NULL.
Insertion triée :

   La fonction InsererTrie prend un nombre entier et l'insère dans la liste de manière à ce que la liste reste triée. Elle gère plusieurs cas :
Si la liste est vide, la nouvelle cellule devient la tête.
Si la valeur à insérer est inférieure à celle de la tête, la nouvelle cellule devient la nouvelle tête.
Dans les autres cas, elle parcourt la liste pour trouver la bonne position d'insertion entre deux cellules ou à la fin de la liste.
Affichage de la liste :

   La fonction AfficherListe parcourt la liste à partir de la tête, affichant chaque valeur jusqu'à la fin de la liste.
Interaction avec l'utilisateur :

    Dans la fonction principale (main), le programme demande à l'utilisateur combien d'éléments il souhaite ajouter à la liste, puis il lui demande de saisir ces éléments un par un. Chaque nouvel élément est inséré dans la liste en utilisant la fonction InsererTrie.
Affichage final :

   Une fois tous les éléments ajoutés, le programme affiche la liste triée.

