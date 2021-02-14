#include<stdio.h>

void star(int);
int n;

main(){
	
	scanf("%d",&n);
	for(int i = n ; i>0; i--){
		star(i);
	}
}

void star(int x){
	for(int i = x; i>0; i--){
		printf("*");	
	}
	printf("\n");	
}
