/*algorithme:bigramme
variable   texte: cahine de caractere de taille max 10001
            bigramme:chaine de caractere de taille max 
            longTexte,longBi,i,nb:entiers
debut
    afficher ("Entrer le texte a analyser");
    faire
        lire(texte);
        longTexte=longueur de texte;
        si(longt>10000)alors
            afficher("Le texte est trop long.Veuillez entrer un texte de 10000 caracteres max");
        finsi
    tantque(longt>10000);
    afficher("Entrer le bigramme a rechercher");
    faire
        lire(bigramme);
        longBi=longueur bigramme;
        si(logBi>2)alors
            afficher("Bigramme invalide");
        finsi
    tantque(longBi>10000);
    pour (i de 0 a longTexte)
        si(texte[i]=bigramme[0] ET texte[i+1]=bigramme[1])alors
            nb++;
        finsi
    finpour
    afficher("Le bigramme ",bigramme,"apparait ",nb,"fois dans le texte");

fin*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char texte[10001],bigramme[3];
    int longBi,longTexte,i,nb=0;
    printf("Entrez le texte a analyser:\n");
    do
    {
        fgets(texte,sizeof(texte),stdin);
        texte[strcspn(texte,"\n")]='\0';
        longTexte=strlen(texte);
        if (longTexte>10000)
        {
            printf("Texte trop long.Veuillez entrez un texte de 10000 caracteres max\n");
        }
    } while (longTexte>10000);
    printf("Entrez le bigramme a rechercher:\n");
    do
    {
        fgets( bigramme,sizeof(bigramme),stdin);
        bigramme[strcspn(bigramme,"\n")]='\0';
        longBi=strlen(bigramme);
        if (longBi>2)
        {
            printf("Texte trop long.Veuillez entrez un texte de 10000 caracteres max\n");
        }
    } while (longBi>2);
    for ( i = 0; i < longTexte; i++)
    {
        if (texte[i]==bigramme[0] && texte[i+1]==bigramme[1])
        {
            nb++;
        }  
    }
    printf("Le bigramme %s apparait %d fois dans le texte\n",bigramme,nb);
    puts(texte);
}