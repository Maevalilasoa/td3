/*algorithme: pairsETImpairs

variables: tab:tableau entiers [101]
           n,i,j=0,tmp,k,l:entiers

debut
afficher("Combien de valeurs voulez vous inserer dans le tableau?");
faire
        lire(n);
        si(n>100) alors
            afficher ("Le nombre de valeur maximum est 100");
            sinon si (n n'est pas entiers)
                vider le tampon;
                afficher("Veuillez entrez un nombre valide");
            finsi
        finsi
tant que(n>100 ou n n'est pas entiers );
pour(i<-0;i<n;i++)
    afficher("tab[",i,"]=");
    lire(tab[i]);
finpour
afficher("Voici les elements du tableau: ");
pour(i<-0;i<n;i++)
   
    afficher(tab[i]);
    
finpour
afficher("Deplacement des nombres pairs  avant les nombres impairs");
k<-n;
pour(i de 0 a k)
    si(tab[i]%2=1)alors
        tmp<-tab[i];
        pour(j de i a n-1)
            tab[j]<-tab[j+1];
        fin pour
        tab[n-1]<-tmp;
        k<-k-1;
        i<-i-1;
    finsi
finpour
afficher("Affichage du tableau trie:");
pour(i de 0 a n+1)
    afficher(tab[i]);
finpour

*exo2: insertionNombre*
afficher("Entrez le nombre a inserer:")
    faire
        lire(tab[n]);
        si (tab[n] n'est pas entiers)
            vider le tampon;
            afficher("Veuillez entrer un nombre valide ");
        finsi
    tantque(tab[n] n'est pas entiers);
    n++;
    k<-n;
    pour(i de 0 a k)
        si(tab[i]%2=1)alors
            tmp<-tab[i];
            pour(j de i a n-1)
                tab[j]<-tab[j+1];
            fin pour
            tab[n-1]<-tmp;
            k<-k-1;
            i<-i-1;
        finsi
    finpour
afficher("Affichage du tableau trie:");
pour(i de 0 a n)
    afficher(tab[i]);
finpour

*exo3:suppressionDunElement*
afficher("Entrez la valeur que vous souhaitez effacer:");
faire
    lire(l);
    si(l n'est pas entiers)alors
        vider le tampon;
        afficher("Veuillez entrer un nombre valide");
    finsi
tantque(l n'est pas entiers);
k<-n;
pour(i de 0 a n)
    si(tab[i]=l)alors
        pour(j de i a k)
            tab[j]<-tab[j+1];
        finpour
        k--;
        i--;
    finsi
finpour
afficher("Affichage du tableau resultant:");
pour(i de 0 a k)
    afficher(tab[i]);
finpour
fin*/

#include<stdio.h>


int main()
{
    int tab[101],r,n,i,j,tmp,k,l;

    printf("Entrez la taille du tableau: ");
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
    }
    printf("Affichage du tableau:\n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",tab[i]);
    }
    printf("\nDeplacement des elements pairs devant les elements impairs\n");
    k=n;
    for(i=0;i<k;i++)
    {
        if(tab[i]%2==1)
        {
            tmp=tab[i];
            for(j=i;j<n-1;j++)//bouge tous les elements apres le nombre impair vers la gauche
            {
                tab[j]=tab[j+1];
            }
            tab[n-1]=tmp;//mets le nombre impair trouve a la fin du tableau
            k--;//reduit le nombre de case a traiter car la derniere case contient le nombre impairr trouve precedemment
            i--;//en cas de nombre impir successifs
        }    
    }
    printf("Affichage du tableau trie:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",tab[i]);
    }
    printf("\n");
   printf("Entrez le nombre a inserer: ");
    do
    {
        r=scanf("%d",&tab[n]);
        if (r!=1)
        {
            while(getchar() !='\n');
            printf("Veuillez entrez un nombre valide\n");
        }
    } while (r !=1 );
    n++;
    k=n;
    for(i=0;i<k;i++)
    {
        if(tab[i]%2==1)
        {
            tmp=tab[i];
            for(j=i;j<n-1;j++)//bouge tous les elements apres le nombre impair vers la gauche
            {
                tab[j]=tab[j+1];
            }
            tab[n-1]=tmp;//mets le nombre impair trouve a la fin du tableau
            k--;//reduit le nombre de case a traiter car la derniere case contient le nombre impairr trouve precedemment
            i--;//en cas de nombre impir successifs
        }    
    }
    printf("Affichage du tableau trie:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",tab[i]);
    }
    printf("\n");
    printf("Entrez  la valeur que vous souhaitez effacer: ");
    do
    {
        r=scanf("%d",&l);
        if (r!=1)
        {
            while(getchar() !='\n');
            printf("Veuillez entrez un nombre valide\n");
        }
    } while (r !=1 );
    k=n;
    for(i=0;i<n;i++)
    {
        if(tab[i]==l)
        {
            for(j=i;j<n;j++)//bouge tous les elements apres le nombre  vers la gauche
            {
                tab[j]=tab[j+1];
            }
            k--;//reduit le nombre de case a traiter 
            i--;//en cas de nombre recherche successifs
        }            
    }
    printf("Affichage du tableau resultant:\n");
    for(i=0;i<k;i++)
    {
        printf(" %d ",tab[i]);
    }
    printf("\n");
    return(0);
}