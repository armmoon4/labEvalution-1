#include <stdio.h>
int main()
{
    int num, m,i;
    scanf("%d %d",&num,&m);
    for(i=num; i<=m; i++)

        if(i%num==0)
        {

            printf("%d ",i);
        }
    return 0;
}
