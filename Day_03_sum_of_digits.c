#include<stdio.h>

int main(){
    int n,sum=0,digits;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        digits=n%10;
        sum=sum+digits;
        n=n/10;

    }
    printf("the sum of digits is %d",sum);
    return 0;
}