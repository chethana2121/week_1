#include<stdio.h>
int linearsearch(int[],int,int);
int main(){     
    int n,a[10],ele,pos,i;
    printf("enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search:");
    scanf("%d",&ele);
    pos = linearsearch(a,n,ele);
    if (pos == -1){
    printf("element not found");
    }
    else {
        printf("\n element found at %d position",pos+1);
    }
   }
int linearsearch(int a[10],int n,int ele)
{
    int i;
    for(i=0;i<n;i++){
        if(a[i]==ele){
        return i;
        }
    }return -1;
}
