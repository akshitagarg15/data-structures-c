#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void display(int arr[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void sortedInsertion(int arr[],int* size,int capacity,int element,int index){
    if(*size>=capacity){
        printf("Overflow\n");
        return;
    }
    int i;
    for(i=*size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    (*size)++;
}

void deletion(int arr[], int *size,int capacity,int index){
    if(*size==-1 || *size>capacity){
        printf("Underflow\n");
    }
    int i;
    for(i=index;i<*size-1;i++){
        arr[i]=arr[i+1];

    }
    (*size)--;
}

    int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    // printf("size: %d",size);
    display(arr, size);
    int capacity = 100;

    sortedInsertion(arr, &size, capacity, 25, 2);
    // printf("New size: %d",size);
    printf("\nAfter Insertion: \n");
    display(arr, size);
    printf("\nAfter Deletion: \n");

    deletion(arr,&size,capacity,2);
    display(arr, size);

    return 0;
}