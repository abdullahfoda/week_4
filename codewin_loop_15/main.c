#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,digit,product=1 ;
    printf("enter a number\n");
    scanf("%d",&num);

    while(num!=0){
        digit=num%10;
        product*=digit;
        num/=10;
    }
    printf("Product of digits:%d",product);
    return 0;
}
