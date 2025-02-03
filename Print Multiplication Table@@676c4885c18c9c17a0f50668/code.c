#include <stdio.h>
int main()
{
    int number,i;
    scanf("%d",&number);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d=%d\n",number,i,number*i);
    }
    return 0;
}