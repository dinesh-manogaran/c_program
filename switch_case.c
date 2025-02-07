#include <stdio.h>
int main (){
    int a , b , result , choice;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("The choices are: \n 1.add \n 2.sub \n 3.mul \n 4.div \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result = a+b;
        printf("The addition of %d and %d is %d",a,b,result);
        break;
        case 2:
        result = a-b;
        printf("The subtraction of %d and %d is %d",a,b,result);
        break;
        case 3:
        result = a*b;
        printf("The multiplication of %d and %d is %d",a,b,result);
        break;
        case 4:
        result = a/b;
        printf("The division of %d and %d is %d",a,b,result);
        break;
        default:
        printf("Please emter a valid choice");
        break;
    }
    return 0;
}