#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int msb=(num &(1<<31))!=0;
    if(msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }

    return 0;
}