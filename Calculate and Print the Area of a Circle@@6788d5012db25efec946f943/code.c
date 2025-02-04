#include <stdio.h>
int main()
{
    double radius,area;
    const double PI=3.14;
    scanf("%lf",&radius);
    area=PI*radius*radius;
    printf("Area: .2lf\n",area);
    return 0;
}