#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("please enter day number (1-7)\n");
    scanf("%d",&day);

    switch(day){

    case 1:
    printf("saturday");
    break;

    case 2:
    printf("sunday");
    break;

    case 3:
    printf("monday");
    break;

    case 4:
    printf("tuesday");
    break;

    case 5:
    printf("wednesday");
    break;

    case 6:
    printf("thursday");
    break;

    case 7:
    printf("friday");
    break;

    default:
    printf("enter a valid number");

    }

    return 0;
}
