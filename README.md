# Mini-Compilateur d'un Sous-Programme C

## 2. Description

Un mini-compilateur est conçu pour analyser un sous-ensemble du langage C, tel qu'une fonction simple, et produire une représentation intermédiaire ou un code machine de base. Ce projet met en œuvre les principes fondamentaux de la compilation, notamment l'analyse lexicale, syntaxique et sémantique.

* Ce projet vous permet :
  
  * De vérifier la syntaxe et les règles sémantiques des sous-programmes en C.
  * De générer un arbre abstrait représentant la structure du code.
  * D'identifier les erreurs de syntaxe dans le programme source.

## 3. Prérequis

* <b>Logiciels nécessaires :</b>
  
  * <b>Éditeur de code :</b> Visual Studio Code, Geany, ou un autre éditeur de votre choix.
  * <b>Compilateur C :</b> gcc, clang.
  * <b> Bibliothèques standard du C :</b>
      ```stdlib.h```, ```stdio.h```, ```ctype.h```, ```string.h```, ```unistd.h```.
  * <b>Outils supplémentaires :</b>
      Bison (analyseur syntaxique généré automatiquement).
      Flex (génération de l'analyseur lexical).

* Pour installer Bison et Flex sous Linux :
  
  ```bash
  sudo apt-get install bison flex
  ```
  
  ## 4. Installation

Téléchargez le fichier compressé du projet :

```bash
ProjetASL3_DESRAVINES.tar.gz
```

Décompressez le fichier dans le répertoire de votre choix :

```bash
unzip ProjetASL3_DESRAVINES.tar.gz
```

Accédez au dossier du projet :

```bash
cd projet
```

Assurez-vous que Bison et Flex sont installés sur votre système (voir la section Prérequis).

## 5. Utilisation

<b>Compilation :</b>

Compilez le mini-compilateur en exécutant :

```bash
make
```

<b>Exécution :</b>

Lancez le programme en utilisant la commande suivante :

```bash
./tpcas [OPTIONS] < fichierÀTester.tpc
```

<b>Options disponibles :</b>

    -t, --tree : Affiche l’arbre abstrait correspondant au sous-programme.
    -h, --help : Affiche l'aide sur les commandes disponibles.

<b>Exemples d'utilisation :</b>

Affichage de l'arbre abstrait :

```bash
./tpcas -t < test1.tpc
```

Affichage de l'aide :

    ./tpcas -h < test1.tpc

## 6. Structure du Projet

La structure du projet est organisée de manière à faciliter la navigation et la maintenance :

* <b>Répertoires principaux :</b>
  
  * <b>src :</b> Contient les fichiers sources du mini-compilateur :
      tree.c, tree.h : Construction de l'arbre abstrait.
      lexer.l : Analyseur lexical (Flex).
      parser.y : Analyseur syntaxique (Bison).
  
  * <b>bin :</b> Contient les fichiers binaires générés, notamment l'exécutable du compilateur (tpcas).
  
  * <b>obj :</b> Stocke les fichiers objets (.o) générés lors de la compilation.
  
  * <b>test :</b> Répertoire contenant des jeux d’essais pour tester le mini-compilateur.
      good : Programmes C respectant les règles du langage.
      syn-err : Programmes C contenant des erreurs syntaxiques.
  
  * <b>rep :</b> Contient le rapport du projet.
  
  * <b>Au niveau de la racine :</b>
      jeuEssai.sh : Script de test automatisé. Ce script exécute tous les jeux d'essais (programmes valides et invalides) et génère un rapport unique avec :
    
          Résultats des tests.
          Score global de réussite.
    
      ,un makefile et un README.

<b>Lancement du script de jeu d'essai :</b>

Pour lancer les tests automatiquement, exécutez :

* compilation du jeu d'essai:
  
  ```bash
  bash jeuEssai.sh
  ```

* éxecuter le jeu d'essai
  
  ```bash
  ./jeuEssai.sh
  ```
  
  Après l'exécution du script, les scores seront inscrits dans le fichier ```report.txt```.