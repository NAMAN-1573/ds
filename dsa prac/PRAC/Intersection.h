#include<stdio.h>

void IOS(int arr1[],int arr2[],int s1,int s2){
   int arr[100],i=0,j=0,n=s1+s2,k=0;
    while(n>0){
        if(i<s1 && j<s2){
           
            
            if(arr1[i]==arr2[j]){
                arr[k]=arr1[i];
                i++;
                j++;
                k++;
                n--;
            }
            else if(arr1[i]<arr2[j])
            {
                i++;
            }
            else 
            {
                j++;
        }
        }
         n--;
    }
    for(int i=0;i<k;i++){
        printf("%d  ",arr[i]);
    }
}