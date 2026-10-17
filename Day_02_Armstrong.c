#include<stdio.h>

int main(){
    int n,original,sum=0,digit;
    printf("Enter The Number:");
    scanf("%d",&n);
    original=n;
    while(n>0){
        digit= n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;

    }
    if(original==sum){
        printf("the number is Armstrong");
    }
    else{
        printf("the number is not Armstrong");
    }
    return 0;

}