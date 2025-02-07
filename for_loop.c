#include <stdio.h>
int main () {
    int number,temp;
    printf("Enter the number : ");
    scanf("%d",&number);
    while(number > 0){
        temp = number % 10;
        printf("%d\n",temp);
        number = number /10;

    }
    return 0;
}
