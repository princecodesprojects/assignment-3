#include<stdio.h>
#include<conio.h>
int main()
{
    char alpb;
    printf("Enter a character\n");
    scanf("%c",&alpb);
    if(alpb>='a' && alpb<='z')
    printf("%c is lowercase",alpb);

    else if(alpb>='A' && alpb<='Z')
    printf("%c is uppercase",alpb);

    else if(alpb>='0'&&alpb<='9')
    printf("%c is digit",alpb);
    else
    printf("%c is special character");
    return 0;
}