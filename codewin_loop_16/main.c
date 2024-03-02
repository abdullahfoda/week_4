#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,digit ;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("Reverse of your num :\n");
   while(num!=0){
    digit=num%10 ;
    printf(" %d",digit);
    num/=10;
   }

    return 0;
}
