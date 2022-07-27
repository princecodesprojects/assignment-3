#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects\n");
    scanf("%d%d%d%d%d%d",a,b,c,d,e);
    if(a>=33 && b>=33&& c>=33&& d>=33&& e>=33)
    {
        printf("Student is pass");
    }
    else
    printf("Student is faill");
}