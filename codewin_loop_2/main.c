#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;
    printf("please enter number!\n");
    scanf("%d",&num);

     printf("Natural numbers from %d-1 in reverse: \n",num);
    for(int i=num ;i>0 ;i--){
        printf("%d,",i);
    }
    return 0;
}
