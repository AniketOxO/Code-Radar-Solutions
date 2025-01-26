#include <stdio.h>
int main()
{
    double num1,num2,num3,average;
    scanf("%lf%lf%lf",&num1,&num2,&num3);
    average=(num1+num2+num3)\3;
    printf("Average: %.2lf\n",average);
    return 0;
}