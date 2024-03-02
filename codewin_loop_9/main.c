#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,i ,multi;
    printf("please enter a number\n");
    scanf("%d",&num);

    for(i=1 ;i<=10 ;i++){
        multi=num*i;
        printf(" %d * %d = %d \n",num,i,multi);
    }
    return 0;
}
