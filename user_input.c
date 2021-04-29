// Get input from user and show the output
#include<stdio.h>
int main(){
    int x,y,sum;
    printf("Enter 2 numbers: ");
    scanf("%d",&x);
    scanf("%d",&y);
    sum=x+y;
    printf("The sum of the two numbers is: %d",sum);
    return 0;
}