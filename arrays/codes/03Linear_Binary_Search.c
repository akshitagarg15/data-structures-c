#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int linearSearch(int arr[],int size,int element){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[],int size,int element){
    
    int low=0;
    int high=size-1;
    

    while(low<=high){
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        // mid is not our element
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;

    
    

}

int main(){
    int arr[]={1,2,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=99;
    printf("Element %d is present is at index %d \n",element,linearSearch(arr,size,element));
    printf("Element %d is present is at index %d \n",element,binarySearch(arr,size,element));
    return 0;
}