#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2)
    printf("%d is odd number",n);
    else
    printf("%d is even",n);
    return 0;
}