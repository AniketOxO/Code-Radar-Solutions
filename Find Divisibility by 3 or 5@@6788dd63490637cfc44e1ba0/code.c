#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%3==0 && b%5==0)
    {
        printf("Divisible by both");
    }
    else if(a%3==0 || b%5!=0)
    {
        printf("Divisible by 3");
    }
    else if(a%3!=0 || b%5==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Neither");
    }
    return 0;
    

}