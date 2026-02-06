#include<stdio.h>
void main(){

    int i=0,iteam;
    int a[5]={12,32,4,12,42};

    printf("enter any element");
    scanf("%d",&iteam);

    while (i<5)
    {
        if(a[i]>iteam){
            printf("element found");
            exit(0);
        }
        ++i
    }
    if(i<5){
        printf("element not found");
        exit(0);
    }
    
}