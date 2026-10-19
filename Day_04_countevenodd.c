#include<stdio.h>


void countevenodd(int n){
    
    int even=0,odd =0,digit;
    
    while(n>0){
    digit=n%10;
        if(digit%2==0){
            even++;
        }
else{
    odd++;

}
n=n/10;

    }
    printf("even=%d\n",even);
    printf("odd=%d",odd);
}
int main(){
countevenodd(5678);
return 0;
}