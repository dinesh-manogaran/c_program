#include <stdio.h>
int main (){
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);
    if (number % 3 == 0 && number % 5 == 0){
        printf("The number is divisible by both 3 and 5",number);
    } else if (number % 3 == 0){
        printf("The %d is divisible by 3",number);
    }else if(number % 5 == 0){
        printf("The %d is divisible by 5",number);
    }
    else{
        printf("The %d is not divisible by 3 and 5",number);
    }
    return 0;
}