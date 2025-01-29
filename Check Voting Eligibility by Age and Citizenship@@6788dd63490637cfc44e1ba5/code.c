#include <stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>=18 && num2==1)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}