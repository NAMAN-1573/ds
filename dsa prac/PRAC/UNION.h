#include<stdio.h>

void uos(int arr1[],int arr2[],int s1,int s2){
   int arr[100],i=0,j=0,n=s1+s2,k=0;
    while(n>0){
        if(i<s1 && j<s2){
            if(arr1[i]<arr2[j]){
                arr[k]=arr1[i];
                i++;
                k++;
            }
            else if(arr1[i]==arr2[j]){
                arr[k]=arr1[i];
                i++;
                j++;
                k++;
                n--;
            }
            else{
                arr[k]=arr2[j];
                j++;
                k++;
            }
        }
        else if(i==s1){
            arr[k]=arr2[j];
            j++;
            k++;
        }
        else if(j==s2){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        n--;
    }
     for(int i=0;i<k;i++){
        printf("%d  ",arr[i]);
    }
}