#include <stdio.h>
int main
{
    int costprice,sellingprice;
    scanf("%d %d",&costprice,&sellingprice);
    if(costprice>sellingprice)
    {
        printf("Loss");
    }
    else
    {
        printf("Profit")
    }
    return 0;
}