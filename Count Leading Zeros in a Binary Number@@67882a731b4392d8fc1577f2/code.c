#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=31;i>=0;i--)
    {
        if(a &(1<<i));
        break;
        count++;
        
    }
    printf("%d",count);
    return 0;
}