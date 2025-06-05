#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int armstrong(int n){
    char * s;
    int digits=0;
    int temp1=n;
    while(temp1>0){
        temp1/=10;
        digits++;
    }
    int temp2=n;
    int sum;
    while(n>0){
        int dig=n%10;
        sum+=(int)pow(dig,digits);
        n/=10;
    }
    if(sum==temp2)
    return 1;
    return 0;
}

int main(){
    int n;
    printf("Enter the number of your choice ");
    scanf("%d",&n);
    if(armstrong(n)==1)
    printf("Yes.\n");
    else
    printf("No.\n");
    return 0;
}