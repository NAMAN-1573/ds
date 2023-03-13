#include <stdio.h>

int main(void) {
	// your code goes here
	
	int a,t;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&a);
	    int ar[a];
	    int k=0,f=0;
	    int c=0;
	       int arr[10];
	    for(int i=2;i<a;i++){
	        if(a%i==0){
	        ar[i-2]=i;
	        c++;
	        }
	    }
	    for(int i=0;i<c-1;i++){
	        
	        for(int j=0;j<c-1;j++){
	        int d=(ar[i]*ar[j]);
	        if(a%d==0 && d!=a ){
	            arr[k]=ar[i];
	            k++;
	            f=1;
	            break;
	           
	        }
	       
	    }}
	    if(f==1){
	    
	    for(int j=0;j<3;j++){
	     
	        printf("%d ",arr[j]);
	    }}
	    else{
	        printf("-1\n");
	    }
	    
	}
	return 0;
}