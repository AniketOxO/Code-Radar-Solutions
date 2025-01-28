#include <stdio.h>
int main
{
    float costprice,sellingprice;
    scanf("%f %f",&costprice,&sellingprice);
    if(costprice<sellingprice)
    {
        printf("Profit");
    }
    else if(costprice>sellingprice)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}