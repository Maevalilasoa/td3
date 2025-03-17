/*algorithme: palindrome

variable  chaine:chaine de charactere de taille max 21
          debut,fin,long:entier
          
debut
    afficher("Entrez la chaine de caractere pour savoir si c'est un palindrome ou non");
    faire
        lire(chaine);
        long<-longueur(chaine) ;
        si(long>20)alors
            vider le tampon;
            afficher("La chaine est trop longues. Veuillez entrer une chaine de longueur maximum de 20 caractere");
        finsi
    tant que (long>20);
    debut<-0;
    fin<-long;
    tantque(debut<fin)faire
        si(chaine[debut]=chaine[fin])alors
            debut++;
            fin--;
            sinon
            break;
        finsi
    fintantque;
    si(debut==fin)alors
        afficher(chaine,"est un palindrome" );
        sinon
        afficher("chaine n'est pas un palindrome");
    finsi
fin*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *chaine;
    int debut,fin,l;

    printf("Entrez la chaine de caracteres pour savoir si c'est un palindrome ou non\n");
    fgets(chaine,sizeof(chaine),stdin);
    chaine [strcspn(chaine, "\n")]='\0';//fgets genere un "\n" a la fin de la chaine qu'elle a recupérée cette ligne indique que ce dernier sera remplacé par "\0" qui marque la fin de la chaine
    l=strlen(chaine);
    debut=0;
    fin=l-1;
    while (debut<fin)
    {
        if (chaine[debut]==chaine[fin])
        {
            debut++;
            fin--;
            //printf("debut=%d fin=%d\n",debut,fin);
        }
        else
        {
            break;
        }   
    }
    if((debut==fin && l%2==1) || (debut>fin && l%2==0))
    {
        printf("%s est un palindrome\n",chaine);
    }
    /* if the string is a palindrome debut and fin should be equal if the length is uneven
    there it's a palindrome while debut is superior than fin(if the length is even)*/
    else
    {
        printf("%s n'est pas un palindrome\n",chaine);
    }
    
    return (0);
}