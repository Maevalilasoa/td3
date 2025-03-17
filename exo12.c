/*algorihme: carrémagique

variable tab:tableau a 2 dimension de taille max 100*100
         sommeLigne<-0,sommecolonne<-0,i,j,n,tmp<-0:entiers  *i ligne et j colonne*
         
debut
    afficher("Carre magique")
    afficher("Entrez la taille du carré:")
    faire
        lire(n);
        si(n n'est pas entiers)alors
            vider le tampon;
            afficher ("Veuillez entrer un nombre valide");
            sinon si(n>100)alors
                afficher("La taille maximale est 100");
            finsi
        finsi
    tant que (n n'est pas entiers OU n>100);
    afficher("Entrez les valeurs dans le tableau");
    pour(i de 0 a n)
        afficher("Entrez les elements de la i+1 eme ligne");
        pour(j de 0 a n)
            faire
                lire(tab[i][j]);
                si(tab[i][j]n'est pas entiers)alors
                    vider le tampon;
                    afficher("Veuillez entrer un nombre valide")
                finsi
            tantque(tab[i] [j] n'est pas entiers);
        finpour
    finpour
    afficher("affichage du tableau:");
    pour(i de 0 a n)
        pour(j de 0 a n)
            afficher(tab[i][j]);
        finpour
        afficher("\n");
    finpour
    pour(i de 0 a n)
        tmp<-sommeLigne;
        sommeLigne=0;
        pour(j de 0 a n)
            sommeLigne=sommeLigne+tab[i][j];
        finpour
        si(i>0 ET tmp!=sommeLigne)alors
            afficher("Ce n'est pas un tableau magique");
            fin du programme;
        finsi
    finpour
    pour(j de 0 a n)
        tmp<-sommeColonne;
        sommeColonne<-0;
        pour(i de 0 a n)
            sommeColonne=sommeColonne+tab[i][j];
        finpour
        si( tmp!=sommeColonne)alors
            afficher("Ce n'est pas un tableau magique");
            fin du programme;
        finsi
    finpour
    Si(sommeLigne=sommeColonne=tmp)alors
        afficher("C'est un carre magique");
        sinon
        afficher("Ce n'est pas un carré magique");
    finsi
fin*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int tab[100][100],sommeLigne=0,sommeColonne=0,i,j,n,tmp=0,r;
    printf("Carre magique\n");
    printf("Entrez la taille du carré:\n");
    do
    {
        r=scanf("%d",&n);
        if (r!=1)
        {
            while(getchar() !='\n');
            printf("Veuillez entrez un nombre valide\n");
        }
        else if (n<0 || n>100)
        {
            printf("La taille maximale est 100\n");
        }
    } while (r !=1 || n<0 || n >100);
    printf("Entrez les valeurs dans le tableau:\n");
    for ( i = 0; i < n; i++)
    {
        printf("Entrez les elements de la %d eme ligne\n",i+1);
        for ( j = 0; j < n; j++)
        {
            printf("tab[%d][%d]=  ",i,j);
            do
            {
                r=scanf("%d",&tab[i][j]);
            if (r!=1)
            {
                while(getchar() !='\n');
                printf("Veuillez entrez un nombre valide\n");
            }
            } while (r!=1);
        }   
    }
    printf("Affichage du tableau:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf(" %d ",tab[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        tmp=sommeLigne;
        sommeLigne=0;
        for (j = 0; j < n; j++)
        {
            sommeLigne=sommeLigne+tab[i][j];
        }
        if (i>0 && tmp!=sommeLigne)
        {
            printf("Ce n'est pas un carre magique\n");
            exit (0);
        } 
    }
    for ( j = 0; j < n; j++)
    {
        tmp=sommeColonne;
        sommeColonne=0;
        for (i = 0; i < n; i++)
        {
            sommeColonne=sommeColonne+tab[i][j];
        }
        if ( j>0 && tmp!=sommeColonne)
        {
            printf("Ce n'est pas un carre magique\n");
            exit (0);
        } 
    }
    printf("C'est un carre magique\n");
    return(0);
}
