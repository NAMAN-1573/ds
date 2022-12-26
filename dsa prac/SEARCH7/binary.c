#include<stdio.h>
void bis(int s,int ar[],int e){
    int l=0,h=s-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(ar[m]==e){
            printf("FOUND");
            break;
        }
        else if(ar[m]>e){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    if(l>h){
    printf("NOT FOUND");}

    
}
int main(){
  
    int m,ar[100],e;
    printf("Enter the size of array:");
    scanf("%d",&m);

    for(int i=0;i<m;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&ar[i]);
    }
     printf("Enter the element to search:");
    scanf("%d",&e);
    bis(m,ar,e);
    return 0;
}