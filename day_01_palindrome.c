#include<stdio.h>

int main(){
    int n,original,rem,rev;
    printf("Enter the number:");
    scanf("%d",&n);
    rev=0;
    original=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(original==rev){
        printf("the number is palindrome");
    }
    else{
        printf("not palindrome");

    }
    return 0;

}