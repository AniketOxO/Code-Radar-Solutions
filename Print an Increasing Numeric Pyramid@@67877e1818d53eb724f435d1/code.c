#include <stdio.h>
int main()
{
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}