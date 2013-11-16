#include <stdio.h>

int main(void){
    int num1,num2;
    printf("Enter two thingers\n> ");
    scanf("%d%d",&num1,&num2);
    printf("%d is equal to %d: %s"
            ,num1,num2,num1==num2?"true":"false");

    return 0;
}
