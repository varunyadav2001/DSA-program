#include<stdio.h>

void marge(int arr[],int p,int q,int r);
void marge_sort(int arr[],int l,int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void marge(int arr[],int p,int q,int r){
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;

    int l[n1];
    int m[n2];

    for(i=0;i<n1;i++){
        l[i]=arr[p+1];
    }
    for(j=0;j<n2;j++){
        m[j]=arr[q+1+j];
    }

    i=j=0;
    k=p;

    while(i<n1 && j<n2){
        if(l[i]<=m[j]){
            arr[k]=l[i];
            i++;
        }else{
            arr[k]=m[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        arr[k]=l[i];
        i++;
        K++;
    }

    while(j<n2){
        arr[k]=m[j];
        j++;
        K++;
    }
}
int main(){
    int arr[5]={7,2,52,,9,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}