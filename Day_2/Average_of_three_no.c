#include<stdio.h>
int main(){
    float a,b,c,avg;
    printf("Enter the three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of the three numbers is: %f\n",avg);
    return 0;
}