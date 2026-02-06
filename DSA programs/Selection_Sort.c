#include<stdio.h>

void Selection_Sort(int arr[],int size){
    int i,j,min;
    int temp=0;
    for(i=0;i<size;i++){
        min=i;
        for(j=i+1;j<size;j++){
            
            if(arr[j]>arr[min]){
                min=j;
                
            }
            temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
        }
        for(i=0;i<size;i++){
        printf("%d \t",arr[i]);
        }

    }
}

int main(){
    int arr[5] = {12,53,23,7,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    Selection_Sort(arr,size);
    return 0;
}