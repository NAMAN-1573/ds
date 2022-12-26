#include<stdio.h>
#include"UNION.h"
#include"symdiff.h"
#include"DIFFERENCE.h"
#include"Intersection.h"

void main(){
    int arrA[100],arrB[100],n,m,p;
    char ans='y';
    printf("Enter the number of elements in set A in ascending order:");
    scanf("%d",&n);
    printf("\nEnter the elements in set A:");
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }
    printf("\nEnter the number of elements in set B in ascending order:");
    scanf("%d",&m);
    printf("\nEnter the elements in set B:");
    for(int i=0;i<m;i++){
        scanf("%d",&arrB[i]);
    }
    while(ans=='y'){
        printf("\n1. Union of A and B");
        printf("\n2. Intersection of A and B");
        printf("\n3. A - B");
        printf("\n4. B - A");
        printf("\n5. Symmetric Difference of A and B");
        printf("\n");
        printf("\nEnter Your Choice:");
        scanf("%d",&p);
        switch(p){
       case 1:
            uos(arrA,arrB,n,m);
            break;
        case 2:
          IOS(arrA,arrB,n,m);
            break;
        case 3:
           // DIFFERENCE(arrA,arrB,n,m);
            break;
        case 4:
           // symdiff(arrA,arrB,n,m);
            break;
       
        default:
            printf("\nIncorrect Choice.");
            break;
        }
      break;
      fflush(stdin);
      printf("do you want to contine:");
      scanf("%c",&ans);
   }


}