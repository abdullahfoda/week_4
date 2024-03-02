#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num ,digit,total=0,result ;
    printf("enter a number\n");
    scanf("%d",&num);

    for(int i=0;i<=sizeof(num);i++){
        digit=num%10;
        result= digit*pow(2,i);
        total+=result;
        num/=10;
    }
    printf("%d",total);
    return 0;
}
