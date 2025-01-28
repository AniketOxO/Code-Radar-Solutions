#include <stdio.h>
int main()
{
    char ch;
    scaf("%c",&ch);
    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch='U'||
    ch=='a'|| ch='e' || ch=='i'|| ch='o' || ch ='u')
       {
        printf("Vowel");
       }
    else if(ch >='A' && ch<='Z')||(ch >="a" && ch<="z")
    {
        printf("Consonant");
    }
    else
    {
        printf("Digit");
    }



    return 0;
}