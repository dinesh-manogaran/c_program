#include <stdio.h>
int main () {
    int number,temp,m=0;
    printf("Enter the number : ");
    scanf("%d",&number);
    while(number > 0){
        m=(m*10)+number % 10;
        number = number /10;
    }
    printf("The reversed number is : %d",m);
    return 0;
}
