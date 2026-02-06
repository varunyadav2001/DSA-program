#include<stdio.h>
void main(){
    int size;
    int arr[5]={12,3,23,43,43};
    size=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(size,arr);
    getch();
}

void insertion_sort(int size,int arr){


int i,j,k;
for(i=0;i<size;i++){
    k=arr[i];
    j=i-1;
     while (j<=0 && k<arr[i])
     {
        arr[j+1]=arr[j]
     }
     arr[j+1]=k
    }
   
   
    for(i=0;i<size;i++){
        printf("%d",arr[i]); 
    }
     
}