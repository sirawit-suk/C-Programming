#include<stdio.h>

main(){
	
	int x,y;
	
	scanf("%d %d",&x,&y);
	
	for(int i=1; i<=x; i++){
		
		for(int j=0; j<y; j++){
			
			printf("*");
			
		}
		
		printf("\n");
		
	}
	
	
}
