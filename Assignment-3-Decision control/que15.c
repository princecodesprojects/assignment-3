#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive",n);
    }
    else if(n==0)
    printf("%d is zero",n);
else if(n<0)
printf("%d is negative",n);
return 0;

}