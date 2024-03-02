#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,power=1 ;
    printf("input base\n");
    scanf("%d",&x);

    printf("input exponent\n");
    scanf("%d",&y);

    for(int i=1 ;i<=y;i++){
        power*=x;
    }
    printf("%d^%d = %d",x,y,power);
    return 0;
}
