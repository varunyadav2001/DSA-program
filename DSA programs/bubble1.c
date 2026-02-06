#include<stdio.h>
void main(){

    int size;
    int arr[5]={12,42,1,57,2};
    size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(size,arr);
    getch();

}

void bubble_sort(int size,int arr);
int i,j,temp;
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        if(arr[j]<arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;


        }
    }
    printf("valude is stored form"){
        for(i=0;i<5;i++){
            printf("%d"arr[j]);
        }
    }
}