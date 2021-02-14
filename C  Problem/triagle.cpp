#include<stdio.h>

main(){
	int n = 0;
	
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			printf(" ");
		}
		for(int k=1; k<=i*2-1; k++){
			printf("*");
		}
		printf("\n");
	}
	
	for(int l=1; l<=n-1; l++){
		for(int m=1; m<=l; m++){
			printf(" ");
		}
		for(int p=1; p<=(n-l)*2-1; p++){
			printf("*");
		}
		printf("\n");
	}
}

