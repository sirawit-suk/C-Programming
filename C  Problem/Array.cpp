#include <stdio.h>

main(){
	
	int a[10];
	int x;
	
	for(int i=0 ; i<10; i++ ){
		scanf("%d",&a[i]);
	}
	
	for(int i=0 ; i<10 ; i++ ){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}



