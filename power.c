#include <stdio.h>
int main (){
    int n=2,power=3,result=1;
    while(power>0)
    {
        result*=n;
        power--;
    }
    printf("The power value of n is %d",result);
    return 0;
}