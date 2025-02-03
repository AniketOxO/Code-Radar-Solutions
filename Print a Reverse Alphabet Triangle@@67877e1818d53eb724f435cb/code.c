#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}