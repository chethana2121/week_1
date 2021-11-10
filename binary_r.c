#include<stdio.h>
int  binarySearch(int[],int,int,int);
int main(){
        int a[30],n,i,x,p;
        int low,high;
        printf("Enter size of list:");
        scanf("%d",&n);
        printf("Enter %d elements:",n);
        for (i=0;i<n;i++){
                 scanf("%d",&a[i]);
        }
        low=0;
        high=n-1;
        printf("Element to be searched:");
        scanf("%d",&x);
        p = binarySearch(a,x,low,high);
        if(p == -1){
                printf("Element not found");
        }
        else{
                printf("Element found at %d position ",p);
        }
}
int binarySearch(int a[],int x,int low,int high){
        int mid;
        if(low>high)
                return -1;
        mid=(low+high)/2;
        if(x==a[mid])
                return mid;
        else if(x<a[mid])
                binarySearch(a,x,low,mid-1);
        else
                binarySearch(a,x,mid+1,high);
        return -1;
}
