/*algorithme: decryptage

variables texte:chaine de caractère de taille max 10001
          longTexte,i:entiers
          
debut
    afficher("Entrez le texte a decrypter");
    faire
        lire(texte);
        longTexte=longueur texte;
        si(longTexte>10000)alors
            afficher("Texte trop long");
        finsi
    tantque(longtexte>10000);
    pour(i de 0 a longTexte)
        si(i+1<longtexte)alors
            si(texte[i]='I' ET texte[i+1]='T')alors
                texte[i]<-texte[i+2];
                longtexte-=2;
            finsi
        finsi
        sinon
        break;
    finpour
    afficher(texte);
fin*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texte[10001];
    int longTexte,i,j;

    printf("Entrez le texte a decrypter:\n");
    do
    {
        fgets(texte,sizeof(texte),stdin);
        texte[strcspn(texte,"\n")]='\0';
        longTexte=strlen(texte);
        if (longTexte>10000)
        {
        printf("Texte trop long\n");
        }
    } while (longTexte>10000);
    for ( i = 0; i <longTexte; i++)
    {
        if((i+1)<=longTexte)
        {
            if (texte[i=='I'] && texte[i+1]=='T')
            {
                for(j=i;j<=longTexte;j++)
                {
                    texte[j]=texte[j+2];
                }
                longTexte+=2;
            }    
        }
        else
        {
            break;
        }
    }
    puts(texte);
    return(0);
}