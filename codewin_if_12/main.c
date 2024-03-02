#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;
    printf("please enter month number\n");
    scanf("%d",&num);

    if(num==1||num==3||num==5||num==7||num==9||num==11||num==12){
        printf("It contains 31 days");
    }
    else if (num==4||num==6||num==8||num==10){
        printf("It contains 30 days");
    }
    else if (num==2){
        printf("It contains 28 days");
    }
    else {
        printf("not a valid number");
    }
    return 0;
}
