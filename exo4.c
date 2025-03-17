/*algorithme: T2adansT1

variable T1:tableau entiers de taille max 100
         T2:tableau entiers de taille max 50
         a,b,i,j,k,l,m,n,o,p:entiers
         
debut
    afficher("Entrez la taille du premier tableau T1");
    faire
        lire(a);
        si(a n'est pas entiers)
            vider le tampon;
            afficher("Veuillez entrer un nombre valide");
            sinon si(a<0 ou a>100)
                afficher("La taille maximale de T1 est 100");
            finsi
        finsi
    tant que (a n'est pas entiers ou a<0 ou a>100);
    afficher("Entrez les valeurs dans les cases du tableau")
    pour(i de 0 a a )
        afficher("T1[",i,"]=");
        faire
            lire(T1[i]);
            si (T1[i] n'est pas entiers)alors
                vider le tampon;
                afficher("Veuillez entrer un nombre valide");
            finsi
        tantque(T1[i] n'est pas entier);
    finpour
    afficher("Affichage de T1");
    pour(i de 0 a a)
        afficher(T1[i]);
    finpour
        afficher("Entrez la taille du second tableau T2");
    faire
        lire(b);
        si(b n'est pas entiers)
            vider le tampon;
            afficher("Veuillez entrer un nombre valide");
            sinon si(b<0 ou b>50)
                afficher("La taille maximale de T2 est 50");
            finsi
        finsi
    tant que (b n'est pas entiers ou b<0 ou b>50);
    afficher("Entrez les valeurs dans les cases du tableau")
    pour(i de 0 a b )
        afficher("T2[",i,"]=");
        faire
            lire(T2[i]);
            si (T2[i] n'est pas entiers)alors
                vider le tampon;
                afficher("Veuillez entrer un nombre valide");
            finsi
        tantque(T2[i] n'est pas entier);
    finpour
    afficher("Affichage de T2");
    pour(i de 0 a b)
        afficher(T2[i]);
    finpour
    pour(i<-0;i<a;i++)
        pour(j<-0;j<b;j++)
            si(T1[i]=T2[j])alors
                k<-j+1;
                m<-i;
                o<-j;
                pour(l<-k;l<b;l++)
                    si(T1[l]!=T2[o])alors
                        break;
                        sinon
                        o++;
                    finsi
                finpour
                sinon
                break;
            finsi
        finpour
    finpour
    j<-a;
    si(n=b-1)alors
        afficher("T1 contient T2");
        afficher("Effacage de T2 dans T1");
        pour(i<-m;i<=n;i++)
            T1[i]<-T1[i+1];
            j--;
        finpour
    finsi
    afficher("Affichage de T1:");
    pour(i<-0;i<j;i++)
        afficher(T1[i]);
    finpour
fin*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T1[100],T2[50],a = 0,b = 0,i = 0,j = 0,m = 0,r = 0,o = 0;
    
    printf("Entrez la taille de T1: ");
    do
    {
        r=scanf("%d",&a);
        
        if(r!=1)
        {
            while(getchar()!='\n');
            printf("Veuillez entrer un nombre valide\n");
        }
        else if(a<0 || a>100) 
        {
            printf("La taille maximale est 100\n");
        }
    }
    while(r!=1 || a<0 || a>100);
    printf("Entrez les valeurs dans le tableau T1\n");
    for(i=0;i<a;i++)
    {
        printf("T1[%d]= ",i);
        do
        {
            r=scanf("%d",&T1[i]);
            if(r!=1)
            {
                while(getchar()!='\n');
                printf("Veuillez entrer un nombre valide\n");
            }
        }
        while(r!=1);
    }
    printf("T1: ");
    for(i=0;i<a;i++)
    {
        printf(" %d ",T1[i]);
    }
    printf("\n");
    printf("Entrez la taille de T2: ");
    do
    {
        r=scanf("%d",&b);
        if(r!=1)
        {
            while(getchar()!='\n');
            printf("Veuillez entrer un nombre valide\n");
        }
        else if(b<0 || b>50) 
        {
            printf("La taille maximale est 50\n");
        }
    }
    while(r!=1 || b<0 || b>50);
    printf("Entrez les valeurs dans le tableau T2\n");
    for(i=0;i<b;i++)
    {
        printf("T1[%d]= ",i);
        do
        {
            r=scanf("%d",&T2[i]);
            if(r!=1)
            {
                while(getchar()!='\n');
                printf("Veuillez entrer un nombre valide\n");
            }
        }
        while(r!=1);
    }
    printf("T2: ");
    for(i=0;i<b;i++)
    {
        printf(" %d ",T2[i]);
    }
    printf("\n");
    for(i=0;i<a;i++)//parcours de T1
    {
        o=1;
        if(T1[i]==T2[0])//lorsqu'un element de T1 correspond au 1er element de T2
        {
           m=i;//stockena le numero anle case an i T1 nisy correspondance
            for(j=1;j<b;j++)//parcourena le case manaraka anle nisy correspondance 
            {
                if(T1[j]!=T2[o])//raha tsy mitovy de mivoka anle boucle
                {
                    break;
                }
                else if (T1[j]==T2[o])
                {
                    o++;//mitombo manaraka an'ny l zany le o
                }
            }
        }
    }
    j=a;
    if(o==b-1)//donc oe tout s'est bien deroule le dernier nombre stocke dans n est le nombre de condition seuil de la boucle c'est a dire que la boucle n'a pas ete coupee
    {
        printf("T1 contient T2\n");
        printf("Effacage de T2 dans T1\n");
        for(i=m;i<b;i++)
        {
            T1[i]=T1[i+b];
            j--;
        }
    }
    printf("Affichage de T1:\n");
    for(i=0;i<j;i++)
    {
        printf(" %d ",T1[i]);
    }
    printf("\n");
    return(0);
}