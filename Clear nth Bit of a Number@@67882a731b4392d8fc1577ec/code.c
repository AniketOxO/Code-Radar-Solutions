#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a,&b);
    printf("%d",~(a&(1<<b)));
    return 0;
}