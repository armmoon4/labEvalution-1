#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10][10],i,j,row,col;
    int sum = 0;
    int sum1 = 0;
    printf("Enter the Rows and Coloums:");
    scanf("%d%d",&row,&col);
    for(i=0; i<row; i++)
    {

        for(j=0; j<col; j++)
        {

            a[i][j] = rand ()%99;

        }
    }
    int max1 = 0 ;
    for(i=0; i<row; i++)
    {

        for(j=0; j<col; j++)
        {

            if(a[j]>=a[i])
            {

                printf("%d\n",a[i][j]);
                sum +=a[i][j];
                if(max1<a[i][j])
                {

                    max1 = a[i][j];
                }
            }
        }
    }

    printf("The Summation of Upper Triangular : %d\n",sum);
    printf("Maximum Number in Lower Diagonal : %d\n",max1);

    return 0;
}
