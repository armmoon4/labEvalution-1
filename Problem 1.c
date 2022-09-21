#include <stdio.h>

int main()
{
    int i, j, e, Pri;


    printf("Enter 1 to : ");
    scanf("%d", &e);

    printf("Prime numbers between 1 to %d are:\n", e);

    for(i=2; i<=e; i++)
    {
        Pri = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                Pri = 0;
                break;
            }
        }

        if(Pri==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
