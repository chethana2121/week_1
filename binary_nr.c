#include<stdio.h>
int binarysearch(int [],int,int);
int main(){
    int n,a[10],i,ele,pos;
    printf("enter the no of elements: ");
    scanf("%d",&n);
   printf("enter the elemnts:");
   for(i=0;i<n;i++){
        scanf("%d",&a[i]);
   } 
   printf("enter the element to be searched:");
   scanf("%d",&ele);
   pos = binarysearch(a,n,ele);
   if (pos == -1){
   printf("element not found");
   }
   else {
   printf("element found at %d",pos+1);
   }
}

int binarysearch(int a[],int n,int ele){
        int high,low,mid;
        high = n-1;
        low = 0;
        while(low<=high){
            mid = (low+high)/2;
            if (a[mid]==ele)
                return mid;
            else if (a[mid]<ele)
                low = mid+1;
            else 
                high = mid-1;
        }return -1;
}

 
