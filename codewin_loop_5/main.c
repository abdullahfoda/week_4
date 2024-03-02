#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("please enter upper limit \n");
    scanf("%d",&num);

    printf("Odd numbers between 1 to %d:\n",num);

    for(int i=0 ;i<=num;i++){
        if (i%2!=0)
        printf("%d,",i);

    }
    return 0;
}
