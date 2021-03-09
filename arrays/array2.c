/*
    Find the largest and the smallest element of the array
*/

#include<stdio.h>

int main(){
    int size = 0, max, min;
    
    printf("Enter the size of the array u want : ");
    scanf("%d", &size);

    int array[size];

    //inputing the elements of the array
    for(int i = 0; i < size; i++){
        printf("Enter the term %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    //using the first element to compare
    max = min = array[0];

    for(int i = 0; i < size; i++){
        //finding the largest element
        if(array[i] > max)
            max = array[i];
        
        //finding the smallest element
        if(array[i] < min)
            min = array[i];
    }

    printf("The laregest element of the array is %d and the smallest element is %d\n", max, min);

    return 0;
}