#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>99 && n<999)
    printf("%d is three digit number",n);
    else
    printf("%d is not a three digit number",n);
        return 0;
}