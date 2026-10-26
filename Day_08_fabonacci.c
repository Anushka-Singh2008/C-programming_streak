#include<stdio.h>


int main(){
    int a,b,next,i,n;
    a=0;
    b=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;


    }
    printf("\n");
    return 0;
}