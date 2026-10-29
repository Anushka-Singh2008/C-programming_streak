#include<stdio.h>

void largest(int n){
    int largest=0;
    while(n>0){
        int digit= n%10;
        if(digit>largest){
            digit=largest;
        }
    }
int main() {
        int result= largest(6578);
        printf("the result is %d",largest);

    }
    return 0;
}