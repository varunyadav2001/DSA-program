#include<stdio.h>
void main(){
int size;
int arr[5]{12,2,43,2,42};
size=sizeof(arr)/sizeof(arr[0]);
selction_sort(size,arr);
getch();
}

void selection_sort(int arr,int size){

    int i,i,temp=0;
    int min;
    for(i=0;i<size;i++){
        min=i;
        for(j=0;j<size;j++){
            if(arr[j]<arr[j+1]){
                min=j;
                
            }
            temp=arr[j];
            arr[j]=arr[min];
            arr[min]=temp;

        } 
        for(i=0=;i<size;i++){
            printf("%d"arr[i]);
        }

    }
    
}