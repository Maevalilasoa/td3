/*algorithme: cryptage
variables  texte:chaine de caractere de taille max 10001
            consomne:tableau de taille max 20:{'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'}
            voyelle:tableau de taille max 6:{'a','e','i','o','u','y'}
            longTexte,i,c<-0,v<-0,j:entiers
debut
    afficher ("Entrez le texte a crypter:\n");
    faire
        lire(texte);
        longTexte=longueur de texte;
        si(longTexte>5000)alors
            afficher("Le texte est trop long.")
        finsi
    tanque(longTexte>5000);
    pour(i de 0 a longTexte)
       pour(c de 0 a 20)
            pour(v de 0 a 6)
            si(texte[i]=consomne[c] ET texte[i+1]=voyelle[v])alors
                 pour(j =longTexte;j>=i;j--)
                    texte[j+2]=texte[j];
                 finpour
                texte[i+1]<-'I';
                texte[i+2]<-'T';
                 longTexte=longueurTexte;
            finsi
            finpour
       finpour
    finpour
    afficher("Voici le texte crypté: "");
    afficher(texte);

fin*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texte[100001],consomne[20]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};//,'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z'};
    char voyelle[6]={'a','e','i','o','u','y'};//,'A','E','I','O','U','Y'};
    int longTexte,i,c,v,j;

    printf("Entrez le texte a crypter:\n");
    do
    {
        fgets(texte,sizeof(texte),stdin);
        texte[strcspn(texte,"\n")]='\0';
        longTexte=strlen(texte);
        if (longTexte>5000)
        {
            printf("Texte trop long.Veuillez entrez un texte de 5000 caracteres max\n");
        }
    } while (longTexte>5000);
    //tolower(texte[i]);
    for ( i = 0; i < longTexte; i++)
    {
        for ( c = 0; c< 20; c++)
        {
            for ( v= 0; v < 6; v++)
            {
                if (tolower(texte[i])==consomne[c]  && tolower(texte[i+1])==voyelle[v])
                {
                    for ( j = longTexte; j>i; j--)
                    {
                        texte[j+2]=texte[j];
                    }
                    texte[i+1]='I';
                    texte[i+2]='T';
                    //longTexte-=2;
                    i++;
                    break;
                }
            } 
            if(texte[i]=='I' && texte[i+1]=='T')
            {
                break;
            }   
        }   
    }
    printf("Voici le texte crypté:\n");
    puts(texte);
    printf("\n");
}