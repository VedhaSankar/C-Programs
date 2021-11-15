/* 
gcc commandline.c -o "commandline"
./commandline
*/
#include <stdio.h>

int main(int argc, char * argv[])
{

    printf("Count %d:", argc);
    printf("\n arg0: %s", argv[0]);
    printf("\n arg1: %s", argv[1]);
    printf("\n arg2: %s", argv[2]);
    printf("\n arg3: %s", argv[3]);
    printf("\n arg4: %s", argv[4]);
    printf("\n arg5: %s", argv[5]);
    return 0;
}