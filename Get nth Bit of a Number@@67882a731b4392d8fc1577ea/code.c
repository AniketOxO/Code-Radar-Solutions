#include <stdio.h>
int main()
{
    int num1,num2,n;
    scanf("%d",&num1,&num2);
    int bit_value=(num1>>n) &1;
    int bit_value2=(num2>>n) &1;
    printf("%d %d",bit_value,bit_value2);


    return 0;
}