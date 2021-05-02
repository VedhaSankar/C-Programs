#include<stdio.h>
#include<stdlib.h>

/*

10

5 - if a perfect cube
4 - multiple of 4 and divisible by 4
3 - prime number

*/

int cube(int n){ 
    int i=1,flag=0;
    for (i=1;i<n;i++){
        if(i*i*i==n)
        {
            flag=1;
            break;  //perfect cube
        }  
    }
    if (flag)
    return 1;
    else
    return 0;

}

int prime(int n){
    int i = 2, flag = 1;
    for (i=2;i<=n/2;i++)    //7
    {
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if (flag==1)
    return 1;
    else
    return 0;
}
int weights(int n){
    int w=0;
    if (cube(n))
    w+=5;
    if (prime(n))
    w+=3;
    if ((n%6==0) && (n%4==0))
    w+=4;
    return w;
    
}

void sort (int a[], int n)
{
    int i=0,j=0,temp;
    for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
    {
        if (a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
}
int main(){
    int a[20],i,n,w[20];
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        w[i]=weights(a[i]);
    sort(w,n);
    for (i=0;i<n;i++)
        printf("%d\n",w[i]);
    
}


