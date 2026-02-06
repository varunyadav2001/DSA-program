#include<stdio.h>
void main(){
    int size;
    int arrs[5]={132,32,2,13,13};
    size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    getch();
}

void bublle_sort (int arr,int size);
int i,j,temp=0;
for(i=0;i<size;i++){
    for(j=0;j<size;J++){
        if(arr[j]< arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
    for(i=0;i<size;i++){
        printf("%d"arr[j]);
    }
}