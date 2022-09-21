#include<stdio.h>
int main () {



int l ;
int A[100] ,  F[100], i , j ,  count = 0 ;
for (i = 0 ; i < 15 ; i++)
{
    scanf("%d", &A[i]);
}
l = i ;
printf("%d", l );
for(i=0; i<15; i++)
{
    count = 1;
    for(j=i+1; j<15; j++)
    {
        if(A[i]==A[j])
        {
            count++;
            F[j]=-1;
        }
    }
    if(F[i] != -1)
        F[i] = count;
}
for(i=0; i<15; i++)
    if(F[i]!=-1)
        printf("\n%d -- %d ",F[i], A[i]);
printf("\n");
// ts 3
int min, max ;
min = 1000;
max = 0;
for (i = 0; i < 15; i++)
{
    if (A[i] > max)
        max = A[i];
}
for (i = 0; i < 10; i++)
{
    if (A[i] < min)
        min =A[i];
}
printf("%d -- %d", max, min);
return 0;
}
