#include <stdio.h>

int main ()
{
    int tab[50]={1},i,j,k,n,r,temp[50]={0};
    printf("Entrez la taille du triangle rectangle: ");
    do
    {
        r=scanf("%d",&n);
        if (r!=1)
        {
            while(getchar() !='\n');
            printf("Caractere invalide\n");
        }
        else if (n<0 || n>50)
        {
            printf("Nombre invalide\n");
        }
        
    } while (r!=1 || n<0 || n>50);
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<=i;j++)
        {
            temp[j]=tab[j];
        }
        for ( j = 0; j <i+1; j++)
        {
            if(j>0 && j<i)
            {
                tab[j]=temp[j]+temp[j-1];
            }
            else
            {
                tab[j]=1;
            }
            printf(" %d ",tab[j]);
        }
      printf("\n");
    }
    
    
}
