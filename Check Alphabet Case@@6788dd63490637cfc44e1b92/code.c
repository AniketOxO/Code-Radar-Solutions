#include <stdio.h>
int main()
{
    char ch;
    scanf("%d",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}