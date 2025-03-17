/*algorithme: compteaETes

variable texte:chaine de caractere de taille max 10001 
         nba<-0,nbes<-0,l,i: entiers
         
debut 
    afficher("Entrez un texte à analyser pour connaitre le nombre de "a" et de "es" contenu dans le texte");
    faire
        afficher("Attention le texte doit se terminer par un point");
        lire(texte);
        l=longueur de texte
        si(texte[l-1] != '.')alors
            afficher("Texte invalide");
            sinon si (l>1000)alors
                afficher("texte trop long");
            finsi
        finsi
    tantque(texte[l-1]!='.' OU l>10000);
    pour(i de 0 a l)
        si (texte[i]='a')alors
            nba++;
            sinon si (texte[i]='e' ET texte[i+1] = 's')alors
                nbes++;
            finsi
        finsi
    finpour
    afficher("le caractere 'a' est apparu",nba,"fois dans le texte");
    afficher("La suite de caractere "es" est apparue ",nbes,"fois dans le texte");
fin*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char texte[10001];
    int l,nba=0,nbes=0,i;

    printf("Entrez un texte à analyser pour connaitre le nombre de 'a' et de «es» contenu dans le texte\n");
    do
    {
        printf("ATTENTION LE TEXTE DOIT SE TERMINER PAR UN POINT(.)\n");
        fgets(texte,sizeof(texte),stdin);
        texte[strcspn(texte, "\n")] = '\0';
        l =strlen(texte);
        if (texte[l-1]!='.')
        {
            printf("Texte invalide\n");
        }
        else if (l>10)
        {
            printf("Texte trop long\n");
        }
        
    } while (texte[l-1]!='.' || l>10000);
    for ( i = 0; i < l; i++)
    {
       if (texte[i]=='a')
       {
            nba++;
       }
       else if (texte[i]=='e' && texte[i+1]=='s')
       {
            nbes++;
       }  
    }
    printf("Le caractere «a» est apparu %d fois dans le texte\nLa suite de caracteres «es» est apparu %d fois dans le texte\n",nba,nbes);
    return (0);
}
