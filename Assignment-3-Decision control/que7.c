#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    int d=(b*b)-(4*a*c);
    if(d>0)
    printf("root is real and distinct");
    else if(d==0)
   printf("root is real and equal");
   else if(d<0)
   printf("root is complex ");
    return 0;
}