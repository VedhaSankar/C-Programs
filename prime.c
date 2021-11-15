#include<stdio.h>
void prime(int n){
    int i = 2, flag = 0;
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==1)
    printf("Not prime");
    else
    printf("Prime");
}
int main(){
    int n;
    scanf("%d",&n);
    prime(n);
}