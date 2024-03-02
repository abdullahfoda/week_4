#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha ;
    printf("please enter any character\n");
    scanf("%c",&alpha);

    if((alpha>='a'&&alpha<='z') || (alpha>='A'&&alpha<='Z')){
        printf("'%c'is alphabet",alpha);

    }
    else{
         printf("'%c'is not alphabet",alpha);
    }

    return 0;
}
