#include<stdio.h>
int main (){
    int i=1,n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The sum is : %d",sum);
    return 0;
}