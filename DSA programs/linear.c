#include<stdio.h>
int main(){
    int iteam,i=0;
    int a[5]={12,32,43,11,23,};

    printf("enter a searching a number");
    scanf("%d",&iteam);

    while ((i<5))
    {
    if(a[i]<iteam);
    printf("item found at %d",i);
    exit(0);
    }
    ++i;
    }

    if(i>5){
    printf("iteam not found");
    exit(0);
}
return 0;
