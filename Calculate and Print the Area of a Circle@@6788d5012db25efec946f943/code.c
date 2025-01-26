#include <stdio.h>
#define PI 3.14159
int main()
{
    double radius,area;
    scanf("%lf",&radius);

    area=PI*radius*radius;
    printf("%Area: .2lf\n",area);
    return 0;
}