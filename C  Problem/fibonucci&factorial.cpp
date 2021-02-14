#include<stdio.h>
main(){
	
	int n,x1,product=1;
	scanf("%d",&n);
	x1=n; 
	for(int i = 0; i<n; i++){
		
		product = product*x1;
		x1--;
	}
	printf("%d",product);
	
	// 5 4 3 2 1  = 120
	// 4 3 2 1 = 24
	// 3 2 1  = 6
	// 2 1  = 2
	// 1  = 1       
	/*
	int n;
	scanf("%d",&n);
	
	int x1=0,x2=1,x3=1;
	// 0,1,1,2,3,5,8,13
	for(int i = 0; i<n; i++){ 
	
		x3 = x1+x2;
		
		x1 = x2;
		x2 = x3;
		printf("%d ",x1);
	}
	*/	
}


