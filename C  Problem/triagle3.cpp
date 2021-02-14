#include<stdio.h>
#include<math.h>

main(){
	
	int n;
	
	scanf("%d",&n);
	
	for(int i= -n+1 ; i<=n-1 ; i++){
		
		for(int j= -n+1; j<=n-1; j++){
			
			if(abs(i)+abs(j)<n){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		
		printf("\n");
		
		
	}
	
	
	
	
	
}
