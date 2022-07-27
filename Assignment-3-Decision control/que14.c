#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
    {
        printf("%d is divisible by 3 and 2",n);
    }
    else
printf("%d is not divisible by 3 and 2",n);
}