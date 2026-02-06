#include<stdio.h>
#include<conio.h>
void main(){

    int size;
    int arr[5]={12,3,13,64,23};
    size=sizeof(arr)/sizeof(arr[0]);     //function
    bubble_sort(arr,size);               //value
    getch();
}

void bubble_sort(int arr[0], int size);  //arugement pass 
{
    int i,j,temp=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;i++){
            if(arr[j] < arr[j+1]){   // conding checked
                temp=arr[j];          //swiping 
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("value is stored form"){
        for(i=0;i<size;i++){
            printf("%d",arr[j])
        }
    }
}