#include <stdio.h>
int main()
{
    for(int i=1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c","A"+j);
        }
        printf("\n");
    }
    return 0;
}