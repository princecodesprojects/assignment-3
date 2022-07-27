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
    return 0;
}