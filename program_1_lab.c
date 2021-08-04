/* 
gcc program_1_lab.c -o "program_1_lab"
./program_1_lab
*/

# include <stdio.h>
# include <string.h>

int main ()
{

    char str1[] = "BC", str2[] = "BC";
    char dest[100];
    char src[40];

    int res = strcmp(str1, str2);
      
    if (res==0)
        printf("Strings are equal");
    else 
        printf("Strings are unequal");
          
    printf("\nValue of result: %d \n" , res);

    int len = strlen (str1);
    printf ("The length of the string: %d \n", len);

    printf ("Concatenated string: ");
    strcat(str1, str2);
    printf ("%s \n", str1);

    printf ("After copying the string: ");
    strcpy(dest, str1);
    printf ("%s \n", dest);
    return 0;
}