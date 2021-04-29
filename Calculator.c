#include <stdio.h>
int main() {
    printf("Choose one of the options\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    int ch,a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    do{
        printf("\nEnter your choice: \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("The sum is: %d",a+b);
            break;
            case 2:
            printf("The difference is: %d",(a-b));
            break;
            case 3:
            printf("The product is: %d",(a*b));
            break;
            case 4:
            printf("The quotient is: %d",a/b);
            break;
            case 5:
            break;
            default:
            printf("Enter valid input");
        }
    }while(ch!=5);

    return 0;
}