#include<stdio.h>

void quicksort(int ar[25],int l,int h){

int i, j, pivot, temp;

if(l<h){

pivot=l;

i=l;

j=h;

while(i<j){

while(ar[i]<=ar[pivot]&&i<h)

i++;

while(ar[j]>ar[pivot])

j--;

if(i<j){

temp=ar[i];

ar[i]=ar[j];

ar[j]=temp;

}

}

temp=ar[pivot];

ar[pivot]=ar[j];

ar[j]=temp;

quicksort(ar,l,j-1);

quicksort(ar,j+1,h);

}

}

int main(){

int i, count, ar[25];

printf("Enter some elements: ");

scanf("%d",&count);

printf("Enter %d elements: ", count);

for(i=0;i<count;i++)

scanf("%d",&ar[i]);

quicksort(ar,0,count-1);

printf("The Sorted Order is: ");

for(i=0;i<count;i++)

printf(" %d",ar[i]);

return 0;
}