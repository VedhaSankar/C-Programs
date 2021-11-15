/* 
gcc reverse_string.c -o "reverse_string"
./reverse_string 
*/

#include<stdio.h>
#include<string.h>
int main(){

    char str1[20], str2[20];
    int i=0,j;
    printf("Enter the string to be reversed: ");
    scanf("%s", str1);
    j=0;
    for (i=strlen(str1)-1; i>=0;i--){
        printf("%d",i);
        str2[j]=str1[i];
        j++;
    }

    printf("String: %s", str2);


    return 0;
}