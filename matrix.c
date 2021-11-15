/* 
gcc matrix.c -o "matrix"
./matrix
*/

#include <stdio.h>

void main()
{
    int a[50][50],b[50][50],c[50][50],r1,r2,c1,c2;
    printf("enter no. of rows and columns for 1st matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("enter no. of rows and columns for 2nd matrix\n");
    scanf("%d %d",&r2,&c2);
    
    printf("enter first matrix elements\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter 2nd matrix elements\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
   if(c1==r2)
    {
    printf("multiplied  matrix are\n");
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<c1;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }

        }
    }
    printf("Resultant matrix are\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("multiplication cannot be performed\n");
    }

}