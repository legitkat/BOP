/*
    Find average of elements in an array
*/

#include<stdio.h>

int main(){
    int size = 0, avg = 0, sum = 0;
    
    printf("Enter the size of the array u want : ");
    scanf("%d", &size);

    int array[size];

    //inputing the elements of the array
    for(int i = 0; i < size; i++){
        printf("Enter the %dth term : ", i+1);
        scanf("%d", &array[i]);
    }

    //added of the elements of the array
    for(int i = 0; i < size; i++)
        sum += array[i];

    avg = sum/size;

    printf("The average of the elements of the array is %d\n", avg);

    return 0;
}