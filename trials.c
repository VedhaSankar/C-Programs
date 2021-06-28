/* 
gcc trials.c -o "trials"
./trials
*/


#include <stdio.h>

int main()
{
    int a = "D";
    printf(sizeof(a));

    return 0;
}



// #include<stdio.h>
// struct point
// {
//     float x;
// 	float y;
// };
// int main()
// {
// 	struct point or ,*p;

//     or = {
//         0.0,
//         0.0
//     };
// 	*p = or;
	
//     printf("%f%f",(*p).x,p->y);
//     printf("EEE");
//     return 0;
// }

/*

#include<stdio.h>
#include<string.h>
void main(){
    char a[] = {'h', 'e', 'l', 'l', 'o'};  // \0 has beenoverwritten,,we won't get the exact length
    // int len = strlen(a);
    printf("%d", strlen(a));
}

#include <stdio.h> 
int main()
{
    int num;
    printf("Enter input\n");
    scanf("%d",&num);
    if(num&1)
        printf("Odd num");
    else
        printf("Even num");
    return 0;
}

*/

// #include<stdio.h>
// void main()
// {
//     char *cityPrt[4]={"Chennai","Kolkata","Mumbai","New Delhi"};
//     int r,c;
//     printf("%d\n",sizeof(cityPrt));
//     /*
//     for (r=0;r<sizeof(cityPrt);r++)
//     {
//         c=0;
//         while (*(cityPrt[r]+c)!='\0')
//         {
//             printf("%c",*(cityPrt[r]+c));
//             c++;
//         }
//         printf("\n");
//     }
//     */
// }
