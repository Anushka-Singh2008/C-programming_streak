#include<stdio.h>


int  power(int base, int exponent){
    int result=1;
    for(int i=1;i<=exponent;i++){

    
    
    result=result*base;
    
}
return result;

}
int main(){
   int answer=power(4,5);
   printf("the answer is %d",answer);
   return 0;

}