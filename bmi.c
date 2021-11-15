/*
gcc bmi.c -o "bmi"
./bmi 
 */


#include <stdio.h>
void main ()
{
    int no_of_person;
    printf("Enter the number of individuals: ");
    scanf("%d",&no_of_person);
    float array_height[no_of_person],array_weight[no_of_person],bmi[no_of_person],h;
    int i,j;
    for (i=0;i<no_of_person;i++)
    {
        printf("\nIndividual %d:\n",i+1);
        printf("Enter the height(in cm): ");
        scanf("%f",&h);
        array_height[i]=h/100;
        printf("Enter the weight(in kg):  ");
        scanf("%f",&array_weight[i]);
        bmi[i]=array_weight[i]/(array_height[i]*array_height[i]);
    }
    printf("\n The BMI of the given individuals are as follows:\n");
    printf("~~~~~~~~~~~~~~~~~~\n");
    printf("Person\tHeight\tWeight\tBMI\tBMI-Category");
    printf("\n~~~~~~~~~~~~~~~~~~\n");
    for (i=0;i<no_of_person;i++)
    {
        printf("\n%d\t%.1f\t%.1f\t%.1f\t",i+1,array_height[i],array_weight[i],bmi[i]);
        if (bmi[i]>=35)
        {printf("Severely obese");}
        else if (bmi[i]>=30)
        {printf("Moderately obese");}
        else if (bmi[i]>=25)
        {printf("Overweight");}
        else if (bmi[i]>=18.5)
        {printf("Normal");}
        else if (bmi[i]>=16)
        {printf("Underweight");}
        else 
        {printf("Severely Underweight");}
    }
}