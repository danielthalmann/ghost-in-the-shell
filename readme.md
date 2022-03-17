# Ghost in the shell

Ghost in the shell est un minishell réalisé dans le cadre de l'école 42 Lausanne
au mois de février 2022. 

C'est une collaboration entre Ricardo Pinto Revés et Daniel Thalmann.

Le projet contient trois librairies utilitaires qui sont disponibles avec leurs
sources :

* Parser : librairie qui est un automate fini déterministe pour découper les jetons de la ligne de commande.
* libft : librairie de fonction C de base.
* printf : librairie printf utilisé pour l'écriture de log.

## Prérequis

Il est nécessaire d'avoir la librairie readline installé avant la compilation

installation pour Mac :

```bash
brew readline
```
installation pour Ubuntu :

```bash
sudo apt get libreadline-dev
```


## Installation

Pour installer le minishell, il faut clôner le présent dépôt git dans un répertoire
de son choix. 

Puis, entrée dans la ligne de commande :

```bash
make
```
Pour executer le minishell tappez dans la ligne de commande :

```bash
./minishell
```
