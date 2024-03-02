#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,i,sum=0 ;
    printf("Input upper limit:\n");
    scanf("%d",&num);

    for( i=1 ; i<=num ;i++){
       sum += i;
    }
    printf("Sum of natural numbers 1-%d: %d",num,sum);
    return 0;
}
