#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha ;
    printf("please enter any character\n");
    scanf("%c",&alpha);

    if((alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u') || (alpha=='A'||alpha=='E'||alpha=='O'||alpha=='I'||alpha=='U')){
        printf("'%c'is vowel",alpha);

    }
    else{
         printf("'%c'is consonant",alpha);
    }

    return 0;
}
