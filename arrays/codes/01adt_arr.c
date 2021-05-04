#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct myArray{
    int totalSize;
    int usedSize;
    // pointing first element
    int * ptr;
};

void createArray(struct myArray * a,int tSize,int uSize){
    // (*a).totalSize=tSize;
    // (*a).usedSize=uSize;
    // (*a).ptr=(int *)malloc(tSize*sizeof(int));
    a->totalSize=tSize;
    a->usedSize=uSize;
    a->ptr=(int *)malloc(tSize*sizeof(int));

}

void setValue(struct myArray *a){
    int i;
    for (i = 0; i < a->usedSize; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &(a->ptr[i]));
    }
}

void show(struct myArray * a){
    int i;
    for(i=0;i<a->usedSize;i++){
        printf("%d\t",a->ptr[i]);
    }
}

int main(){
    struct myArray marks;   
    // to create memory dynamically
    createArray(&marks,10,2);  
    printf("Setting the vaues\n");
    setValue(&marks);
    printf("Printing the values\n");
    show(&marks);
    return 0;
}