#include <stdio.h>
int main
{
    float costprice,sellingprice;
    scanf("%f %f",&costprice,&sellingprice);
    if(costprice>sellingprice)
    {
        printf("Loss");
    }
    else
    {
        printf("Profit");
    }
    return 0;
}