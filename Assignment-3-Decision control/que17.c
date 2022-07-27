#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter  the sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            {
                printf("This triangle is valid");
            }
            else
            printf("This triangle is not valid");
        }
    }
    return 0;
}