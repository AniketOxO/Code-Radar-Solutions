#include <stdio.h>
int main()
{
    int temperature;
    scanf("%d",&temperature);
    if(temperature<=0)
    {
        printf("Freezing");

    }
    else
    {
        printf("Above Freezing");
    }
    return 0;
}