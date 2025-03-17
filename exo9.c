/*algorithme  chaineCarre
variable  chaine:chaine de caractere de taille 21 max
           buffer1:chaine de caracter de taille 11 max
           buffer2:chaine de caracter de taille 11 max
           longChaine,l1,l2,index=0,debut=0,fin:entiers
           
debut
    afficher("Entrez la chaine de caracteres:");
    faire
        lire(chaine);
        longChaine <-longueur(chaine);
        si(longChaine>20)alors
            afficher("La chaine est trop longue veuillez entrer une chaine de 20 caracteres minimum");
        finsi
    tantque(longChaine>20);
    fin<-(longChaine/2);
        pour(i de 0 a fin)
            buffer1[i]<-chaine[index];
            index++;
        finpour
        pour(i de 0 a longChaine)
            buffer2[i]<-chaine[index];
            index++
        finpour
    si(buffer1=buffer2)alors
        afficher("La chaine ",chaine,"est un carre");
        sinon
            afficher("La chaine ",chaine "n'est pas un carre");
    finsi

fin*/

#include <stdio.h>
#include <string.h>

int main()
{
    char chaine[21],buffer1[11],buffer2[11];
    int longChaine,index=0,i,debut=0,fin;

    printf("Entrez la chaine de caracteres:\n");
    do
    {
        fgets(chaine,sizeof(chaine),stdin);
        chaine[strcspn(chaine,"\n")]='\0';
        longChaine=strlen(chaine);
        if (longChaine>20)
        {
            printf("La chaine est trop longue.Veuillez entrer une chaine de 20 caractere maximum\n");
        }   
    } while (longChaine>20);
    fin=(longChaine/2);
    for ( i = 0; i < fin; i++)
    {
        buffer1[i]=chaine[index];
        index++;
    }
    for ( i = 0; i < longChaine; i++)
    {
        buffer2[i] =chaine[index];
        index++;
    }    
    if (strcmp(buffer1,buffer2)==0)
    {
        printf("La chaine %s est un carre\n",chaine);
    }
    else
    {
       printf("La chaine %s n'est pas un carre\n",chaine);
    }
    
    return(0);
}