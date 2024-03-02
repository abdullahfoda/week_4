#include <stdio.h>
int main()
 {
     int num[2] ;
     printf("enter two numbers \n");
     for(int i=0 ;i<2 ;i++){
     scanf("%d",&num);
     }

     for(int j=0 ;j<2 ;j++){
    if (num[j] >= 1 && num[j] <= 9) {

        switch (num[j]) {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
        }
    } else if (num[j] > 9) {
        // Check if it's even or odd
        if (num[j] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }}
    return 0 ;
}


