// finding greatest common divisor:

#include<stdio.h>

int  gcd(int a,int b){
    int gcd=1;
    for( int i=1;i<=a;i++)
    {
if(a%i==0 && b%i==0){
    gcd=i;
}
    }
    return gcd;
}
int main(){
 int result= gcd(8,6);
 printf("result is %d",result);
 return 0;
}
