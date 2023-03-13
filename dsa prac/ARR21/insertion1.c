// insertion 
#include<stdio.h>
int insert(int arr[],int count,int value)
{
    int temp=count-1;
    arr[temp]=value;
    while(temp>0)
    {
        if(arr[temp]>=arr[temp-1])
        {
          break;  
        }
        else{
            int t=arr[temp];
            arr[temp]=arr[temp-1];
            arr[temp-1]=t;
        }
        temp--;
    }
}
int main()
{int n;
     printf(" Name:-NAMAN MISHRA\n");
    printf("Roll no.:-2100320120113 \n");
    printf("Enter size of array:");
    scanf("%d",&n);
     int ar[n],position ,value;
     printf(" Enter the position,value:" );
     scanf("%d %d",&position,&value);
    for(int i=0;i<n;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&ar[i]);      
    }
    insert(ar,position,value);
    for(int i=0;i<n;i++){

    
    printf("%d ",ar[i]);}
    return 0;
}
