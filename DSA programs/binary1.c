#include<stdio.h>
void main(){

    int a[5]={10,20,30,40,50};
    int lr=0,up=4,mid,item,f=0;

    printf("enter any element:");
    scanf("%d",&item);

    while (lr<=up)
    {
        mid=(lr+up)/2;
        if(a[mid]==item){
        f=1; break;
        }
       
    }
    if(f==1){
        printf("iteam found at %d",mid);
    }else{
        printf("item not found");
    }
}


















#include<stdio.h>
void main(){

    int a[5]={10,20,30,40,50};
    int lr=0,up=4,mid,item,f=0;

    printf("enter any element");
    scanf("%d",&item);

    while (lr<=up)
    {
        mid=(lr+up)/2{
            if(a[mid]==item);
        }
    }

    if(f==1){
        printf("found elemamet:");
    }
    else{
        printf("not found");
    }
    


}