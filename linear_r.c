#include<stdio.h>
int linearsearch(int [],int,int,int);
int main(){ 
    int n,ele,pos,a[10],i;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            }
    printf("enter the element to be found:");
    scanf("%d",&ele);
    pos = linearsearch(a,n,ele,0);
    if(pos != -1){
        printf("\nelement found at %d position",pos+1);
       else{
       printf("\nelement not found");
       }
    }
    }
int linearsearch(int a[],int n,int ele,int pos){
        if(pos == -1)
                return 0;
        else if(a[pos]==ele){
            return pos;
        }
        else{
        return linearsearch(a,n,ele,pos+1);
        }

}
