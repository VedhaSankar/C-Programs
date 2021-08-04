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

    int res = strcmp(str1, str2);
      
    if (res==0)
        printf("Strings are equal");
    else 
        printf("Strings are unequal");
          
    printf("\nValue of result: %d \n" , res);

    int len = strlen (str1);
    printf ("The length of the string: %d \n", len);

    strcat(str1, str2);
    printf ("Concatenated string: %s \n", str1);

    strcpy(dest, str1);
    printf ("After copying the string: %s \n", dest);
    
    return 0;
}