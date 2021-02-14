#include<stdio.h>
main(){
	int x;
	scanf("%d",&x);
	for(int i=0; i<x; i++) {
		for(int j=0; j<x; j++) {
			if(j>=x-i-1) {
				printf("* ");
			}
			else printf(" ");
		}
		printf("\n");
	}
/*	int num;
	int A;
	
	scanf("%d",&num);
//	printf("%d",num);
	
	if(num==0){
		
	}
	else if(num>0){
		
		for(int i=1 ; i<=num ; i++ ){
		
			for(int j=1 ; j<=num-A ; j++){
			
				printf("*");
			
			}		
				printf("\n");
				A++;
						
		}	
	}
	else{
		printf("Please Try Again!");
	}	
	*/

}
