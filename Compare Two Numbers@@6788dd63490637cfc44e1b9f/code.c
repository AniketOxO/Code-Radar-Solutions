#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("larger");
    }
    else if(b>a)
    {
        printf("Second");
    }
    else if(a==b)
    {
        printf("Equal");
    }
    return 0;
}