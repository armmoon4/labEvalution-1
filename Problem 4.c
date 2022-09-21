#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;

    printf("Enter The Number of Rows and Coloumn: ");
    scanf("%d %d" , &r  , &c);
    printf("Enter The first mractix Elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The Secound Mractix Elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            mul[i][j]=0;
            for(k=0; k<c; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    int trans[10][10] ;
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            trans[j][i] = mul[i][j] ;
        }
    }

    printf("Transpose Matrix is: \n");
    for(i = 0 ; i < c ; i++)
    {
        printf("\n");
        for(j = 0 ; j < r ; j++)
        {

            printf("%d " , trans[i][j]);
        }
    }
    return 0;
}
