#include<stdio.h>
void main(){
    int a[5]={12,85,34,43,45};
    int lr=0,up=4,low=0,mid,f=0,item;

    printf("enter a any element item:");
    scanf("%d",&item);

    while(lr<=up){
        mid=(lr+up)/2;
        if(a[mid]==item){    //1
            f=1; break;
         }
        if(a[mid]<item){   //contion
            lr=mid+1;    //+1
        }
        else{
            up=mid=1;    //-1
        }
       
       
        if(f==1){
            printf("item found %d",mid);
        }
        printf("item not found");
         
    }
}