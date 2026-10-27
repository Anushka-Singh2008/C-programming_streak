#include<stdio.h>


int main(){
    int count,n,i;
    count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        count=count+1;
        n=n/10;
        
    }
    printf("number of digits is %d",count);
    return 0;
}