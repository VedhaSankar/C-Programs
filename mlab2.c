/* 
gcc mlab2.c -o "mlab2"
./mlab2
*/


#include<stdio.h>
#include<stdlib.h>
struct customer
{
    char name[20];
    int acc_no;
    float bal;
};
int main()
{
    FILE *fp;
    struct customer cus;
    int min=500;
    fp=fopen("sample.txt","w");
    if(fp==NULL)
    {   
        printf("\nError in opening the file");
        exit(1);
    }
    printf("\nEnter Account Information\n");
    int choice=1,count=0;
    do
    {
        printf("\nEnter Customer Name : ");
        scanf("%s",cus.name);
        printf("\nEnter Account Number: ");
        scanf("%d",&cus.acc_no);
        printf("\nEnter Balance: ");
        scanf("%f",&cus.bal);
        fprintf(fp," %s %d %f",cus.name,cus.acc_no,cus.bal);
        printf("\n-------------------------------------\n");    
        printf("\nEnter 0 to exit or 1 to continue");
        scanf("%d",&choice);
    }while(choice==1);
    fclose(fp);
    fp=fopen("sample.txt","r");
    if(fp==NULL)
    {
        printf("\nError in opening the file");
        exit(1);
    }
    while((getc(fp))!=EOF)
    {
        fscanf(fp," %s %d %f",cus.name,&cus.acc_no,&cus.bal);
        if(cus.bal<=min)
        {
            printf("\n |Name = %s Account no = %d Balance = %f |\n",cus.name,cus.acc_no,cus.bal);
            count++;
        }
    }printf("\n##############################################\n");
    printf("\n\n No of account holders whose balance is less than the minimum balance %d is %d",min,count);
    fclose(fp);
    return 0;
}