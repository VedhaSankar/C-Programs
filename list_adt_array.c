/*
gcc list_adt_array.c -o "list_adt_array"
./list_adt_array

*/


#include <stdio.h> 
#define MAX 10;

int arr[10], size;

void insert(){
    printf("Enter the position at which you want to insert: ");
    int pos, i, ele;
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &ele);
    i = size - 1;
    while (i>pos){
        arr[i] = arr[i-1];
        i--;
    }
    arr[pos] = ele;
    size++;
    
}

void create (){
    printf("Enter the number of elements you want: ");
    scanf("%d", &size);
    int ele;
    printf("Enter the array elements: ");
    for(int i = 0; i< size; i++){
        scanf("%d", &arr[i]);
    }
}

void display(){
    for (int i = 0; i < size; i++)
        printf("%d \t", arr[i]);
}

int main (){

    create();
    display();
    insert();    
    display();
}