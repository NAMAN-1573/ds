#include<stdio.h>
int gcd(int a,int b){
   
    if(b==0){
        return a;
    }
return gcd(b,a%b);
}
int main(){
    int a,b;
    printf("************NAMAN MISHRA*************\n");
    printf("**********2100320120113***************\n");
    printf("ENTER NUMBER 1 :\n");
    scanf("%d",&a);
     printf("ENTER NUMBER 2 :\n");
    scanf("%d",&b);
   int c= gcd(a,b);
    printf("gcd: %d",c);
return 0;


}