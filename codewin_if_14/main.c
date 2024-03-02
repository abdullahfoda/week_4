#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,sum ;
    printf("please enter first angle\n");
    scanf("%d",&x);
    printf("please enter second angle\n");
    scanf("%d",&y);
    printf("please enter third angle\n");
    scanf("%d",&z);

    sum =x+y+z ;
    if(sum==180){
        if ((x>0&&x<180)&&(y>0&&y<180)&&(z>0&&z<180)){
            printf("The triangle is valid");
        }
        else {
             printf("The triangle is not valid");
    }}
    else{
         printf("The triangle is not valid");
    }
    return 0;
}
