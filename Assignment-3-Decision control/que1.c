#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive",n);
    if(n<0)
    printf("%d is non-positive",n);
    return 0;
}