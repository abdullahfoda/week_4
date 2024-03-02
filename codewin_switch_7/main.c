#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,res ;
    int num;

    printf("sum->1,sub->2,multi->3,div->4\n please enter num of operation\n");
    scanf("%d",&num);


    printf("please enter first num\n");
    scanf("%f",&x);

    printf("please enter second num\n");
    scanf("%f",&y);


    switch(num){

    case 1:
    res=x+y;
    break;

     case 2:
    res=x-y;
    break;


     case 3:
    res=x*y;
    break;


     case 4:
    res=x/y;
    break;

     default :
        printf("please enter num (1-4)");

    }
    printf("the result =%.2f",res);
    return 0;
}
