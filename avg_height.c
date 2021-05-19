/* 
gcc avg_height.c -o "avg_height"
./avg_height 
*/

#include<stdio.h>
int main(){
int height[20],sum=0,n, i=0;
float avg;
printf("// AVERAGE HEIGHTS OF PERSONS //");
printf(";\n Enter the number of persons :");
scanf("%d",&n);
/* Getting the heights of the persons*/
for(i=0;i<n;i++){
printf("Enter the height of the person %d :",i+1);
scanf("%d",&height[i]);
}
/* Calculating the average height of the array elements*/
for(i=0;i<n;i++){
sum+=height[i];
}
avg= sum/n;
printf("\nThe persons above the average heights are:\n");
for(i=0;i<n;i++){
if(height[i]>avg)
printf("\nHeight of the person %d :%d\n",i+1,height[i]);
}
}