#include<stdio.h>


void makenegative(int *p){
    *p=*p*-1;
}

int main(){
    int num=8;
    makenegative(&num);
    printf("%d",num);
    return 0;
}