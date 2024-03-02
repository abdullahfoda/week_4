#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,m,per ;
    printf("please enter your Chemistry mark \n");
    scanf("%f",&x);
     printf("please enter your  Biology mark \n");
    scanf("%f",&y);
     printf("please enter your Mathematics mark \n");
    scanf("%f",&z);
     printf("please enter your Computer mark \n");
    scanf("%f",&m);

    per=(x+y+z+m)/400*100 ;
       printf("Percentage =%f \n",per) ;

    if(per>=90){
       printf("Grade A") ;
    }
       else if(per<90&&per>=80){
       printf("Grade B") ;
       }
       else if(per<80&&per>=70){
       printf("Grade C") ;
       }
      else if(per<70&&per>=60){
       printf("Grade D") ;
       }
        else if(per<60&&per>=40){
       printf("Grade E") ;
       }
       else{
         printf("Grade F") ;
       }


    return 0;
}
