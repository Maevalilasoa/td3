/*algorithme: pairsETImpairs

variables: tab:tableau entiers [50]
           n,i,m,pos:entiers
           s=0,moy=0:decimaux
debut
afficher("Combien de valeurs voulez vous inserer dans le tableau?");
faire
        lire(n);
        si(n>50) alors
            afficher ("Le nombre de valeur maximum est 50");
            sinon si (n n'est pas entiers)
                vider le tampon;
                afficher("Veuillez entrez un nombre valide");
            finsi
        finsi
tant que(n>50 ou n n'est pas entiers );
pour(i<-0;i<n;i++)
    afficher("tab[",i,"]=");
    faire
        lire(T1[i]);
        si (T1[i] n'est pas entiers)alors
            vider le tampon;
            afficher("Veuillez entrer un nombre valide");
        finsi
    tantque(T1[i] n'est pas entier);
    s<-s+tab[i];
finpour
moy<-s/n;
m<-tab[0];
pos<-0;
afficher("Voici les elements du tableau: ");
pour(i<-0;i<n;i++) 
    afficher(tab[i]); 
    
finpour
pour (i de 0 a n)
    si(moy=tab[i])alors
        m=tab[i];
        pos=i;
        break;
    finsi
finpour
afficher("La moyenne est ",moy);
afficher("L'element du tableau le plus proche de la moyenne",moy,"est",m,"situe dans tab[",i,"]");
fin*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[50],n,i,m,pos,r;
    float s=0,moy=0;
    printf("Combien de valeurs voulez vous inserer dans le tableau?\n");
    do
    {
        r=scanf("%d",&n);
        if (r!=1)
        {
            while(getchar() !='\n');
            printf("Veuillez entrez un nombre valide\n");
        }
        else if (n<0 || n>50)
        {
            printf("La taille maximale est 50\n");
        }
    } while (r !=1 || n<0 || n >50);
    printf("Entrez les elements du tableau\n");
    for(i=0;i<n;i++)
    {
        printf("tab[%d]=  ",i);
        do
        {
            r=scanf("%d",&tab[i]);
        if (r!=1)
        {
            while(getchar() !='\n');
            printf("Veuillez entrez un nombre valide\n");
        }
        } while (r!=1);
        s=s+tab[i];
    }
    moy=s/n;
    printf("Affichage du tableau:\n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",tab[i]);
    }
    printf("\n");
    m=tab[0];
    pos=0;
    for ( i = 0; i < n; i++)
    {
        if (tab[i]<m &&  tab[i]>=moy|| tab[i]>m && tab[i]<=moy)
        {
            m=tab[i];
            pos=i;
        }
        
    }
    printf("La moyenne est %f.L'element le plus proche de la moyenne est T[%d]=%d\n",moy,pos,m);

    return(0);
}