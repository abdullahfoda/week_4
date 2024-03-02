#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,i ,count=0;
    printf("please enter a number\n");
    scanf("%d",&num);

    for(i=0 ;i<= sizeof(num) ;i++){
        count+=1;
    }
        printf(" Number of digits: %d  \n",count);
    return 0;
}
