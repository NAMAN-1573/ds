#include<stdio.h>
#include<stdint.h>
#define SIZE 100

int main(){
int size,m;
int array[SIZE];
unsigned int i, address, calAdd;
    printf("Name : Naman Mishra\t Roll no.: 2100320120113\t Branch : CS\n");

int *baseadd ;
printf("Enter the size of int array: ");
scanf("%d",&size);
m = sizeof(int);
printf("Enter the index to find address: ");
scanf("%d",&i);

baseadd = array;
address = (intptr_t) array;
printf("The base address of array:%u ",baseadd);

calAdd = address + i*m;
printf("\nAddress of %d : %u",i,calAdd);
printf("\nAddress of %d : %u",i,&array[i]);

if (calAdd == (intptr_t) &array[i]){
	printf("\nAddress is correct");
}else{
	printf("\nAddress isn't correct");
}

}