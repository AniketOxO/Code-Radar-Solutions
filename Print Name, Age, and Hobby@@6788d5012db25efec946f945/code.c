#include <stdio.h>
int main()
{
    char name[100],hobby[100];
    int age;
    scanf("%s%s",&name,&hobby);
    scanf("%d\n",&age);

    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}