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

4.INSERTION En TÊTE ET EN QUEUE Dans UNE LISTE SIMPLEMENT CHAÎNÉE CIRCULAIRE  

Description

Ce projet est un programme en langage C qui illustre l’utilisation des listes chaînées circulaires. Une liste circulaire est une structure de données où le dernier élément pointe de nouveau vers le premier, ce qui permet de parcourir la liste en boucle.

Dans ce programme, on peut : 1-insérer un élément en tête de liste 2-insérer un élément en queue de liste 3-afficher tous les éléments de la liste C’est un exemple pratique pour mieux comprendre la manipulation des pointeurs et des structures en C.

Compilation

Pour compiler le programme, utilisez la commande suivante : gcc liste_simplement_chaine_circulaire.c -o liste

Exécution

Une fois compilé, exécutez le programme avec :

./liste

Exemple d'exécution du programme

Liste circulaire apres insertions en tete : 1 -> 5 -> 10 -> 20 -> (retour a 1)

Liste circulaire apres insertions en queue : 10 -> 20 -> (retour a 1)

   5. INSERTION EN TÊTE ET EN QUEUE DANS UNE LISTE DOUBLEMENT CHAÎNÉE CIRCULAIRE

Ce programme en langage C implémente une liste doublement chaînée circulaire.
Chaque nœud contient :
une valeur entière (data)
un pointeur vers le nœud suivant (next)
un pointeur vers le nœud précédent (prev)
La liste est circulaire : le dernier élément pointe vers le premier, et inversement.
Fonctionnalités
Insertion en tête : ajoute un nouvel élément au début de la liste.
Insertion en queue : ajoute un nouvel élément à la fin de la liste.
Affichage avant : parcourt la liste dans le sens normal.
Affichage arrière : parcourt la liste dans le sens inverse.
Exécution
Compiler le programme avec :
gcc liste_circulaire.c -o liste
Lancer l’exécutable :

Bash
./liste
Exemple de sortie

Liste après insertions en tête :
Parcours avant : 1 -> 2 -> (retour à 1)
Parcours arrière : 2 -> 1 -> (retour à 2)

Liste après insertions en queue :
Parcours avant : 1 -> 2 -> 10 -> 20 -> (retour à 1)
Parcours arrière : 20 -> 10 -> 2 -> 1 -> (retour à 20)
