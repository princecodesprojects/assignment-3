#include<stdio.h>
#include<conio.h>
int main()
{
     int sp,cp;
     printf("Enter selling price and cost price");
     scanf("%d%d",&sp,&cp);
     if(sp>cp)
     {
     float profit=(sp-cp)/cp*100;
     printf("Profit percenrage is %f",profit);
     }
     else if(cp>sp)
     {

     float loss=(cp-sp)/cp*100;
     printf("loss percenrage is %f",loss);
     }
     return 0;
}