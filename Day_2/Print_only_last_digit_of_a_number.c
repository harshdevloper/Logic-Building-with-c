#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Last digit of the number is: %d\n",n%10);
    return 0;
}