#include<stdio.h>
#include<math.h>

main(){

	int n;
	scanf("%d",&n);

	for(int i=-n+1; i<=n-1; i++){
		
		for(int j=1; j<=abs(i); j++){
			
			printf(" ");
			
		}
		
		for(int k=1; k<=(-abs(i)*2)+(n*2-1); k++){
			
			printf("*");
			
		}
		
		printf("\n");
		
		
	}


	
}
