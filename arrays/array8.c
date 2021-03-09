/*
    Compare whether 2 arrays are equal or not
        same size, same elements but can be at diff indices
*/

#include<stdio.h>

void swap(int *, int *);
void selectionSort(int [], int);
int isEqual(int [], int, int [], int);

int main(){
    int size1 = 0, size2 = 0;
    
    printf("Enter the size of the first array : ");
    scanf("%d", &size1);
    printf("Enter the size of the second array : ");
    scanf("%d", &size2);

    int array1[size1],
        array2[size2];

    //inputing the elements of the array1
    for(int i = 0; i < size1; i++){
        printf("Enter the term %d of the first array: ", i+1);
        scanf("%d", &array1[i]);
    }

    //inputing the elements of the array2
    for(int i = 0; i < size2; i++){
        printf("Enter the term %d of the second array: ", i+1);
        scanf("%d", &array2[i]);
    }

    if(isEqual(array1, size1, array2, size2))
        printf("\nThe arrays are equal\n");

    else 
        printf("\nThe arrays are not equal\n");

    return 0;
}

//swaps 2 integers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//selection sorting of array
void selectionSort(int array[], int size){
    int i, min_idx;

    for(i = 0; i < size-1; i++){
        min_idx = i;

        for(int j = i+1; j < size; j++)
            if(array[j] < array[min_idx])
                min_idx = j;

        swap(&array[i], &array[min_idx]);
    }
}

int isEqual(int array1[], int size1, int array2[], int size2){
    if(size1 != size2)
        return 0;

    else{
        selectionSort(array1, size1);
        selectionSort(array2, size2);

        for(int i = 0; i < size1; i++)
            if(array1[i] != array2[i])
                return 0;
        
        return 1;
    }
}