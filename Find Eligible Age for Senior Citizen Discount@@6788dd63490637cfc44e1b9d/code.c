#include <stdio.h>
int main()
{
    int citizen;
    scanf("%d",&citizen);
    if(citizen>=60)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}