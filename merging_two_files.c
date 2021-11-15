/* 
gcc merging_two_files.c -o "merging_two_files"
./merging_two_files 
*/

// source : https://codeforwin.org/2018/02/c-program-merge-two-files.html

#include <stdio.h>
#include <stdlib.h>


int main()
{

    char ch;

    FILE *fp1 = NULL;
    fp1 = fopen("file1.txt" ,"a");

    fprintf(fp1, "content in the file");

    FILE *fp2 = NULL;
    fp2 = fopen("file2.txt" ,"a");

    fprintf(fp2, "abcdefg");

    FILE *fp3 = NULL;

    fclose(fp1);
    fclose(fp2);

    /* 
     * Open source files in 'r' and 
     * destination file in 'w' mode 
     */
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("file3.txt",    "w");


    /* fopen() return NULL if unable to open file in given mode. */
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }


    /* Copy contents of first file to destination */
    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    /* Copy contents of second file to destination */
    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    printf("\nFiles merged successfully to '%s'.\n", "file3.txt");


    /* Close files to release resources */
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}