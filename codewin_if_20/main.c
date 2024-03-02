#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sa ;
    printf("please enter your basic salary \n");
    scanf("%d",&sa);

    if(sa<=10000){
        sa=(sa+sa*1);
        printf("Gross salary = %d",sa);
    }
   else if(sa>10000&&sa<=20000){
        sa=(sa+sa*1.15);
        printf("Gross salary = %d",sa);
    }
    else if(sa>20000){
        sa=(sa+sa*1.25);
        printf("Gross salary = %d",sa);
    }
    else{
         printf("enter a valid number");
    }
    return 0;
}
