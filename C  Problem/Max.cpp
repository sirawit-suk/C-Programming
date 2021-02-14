#include <stdio.h>

int Max(int,int);
int a[4];
int x;

main(){
	
	
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}

	printf("%d",Max  (  Max(a[0],a[1])  ,  Max(a[2],a[3])  )  );
	
}

int Max(int x,int y){
	
	
	if(x>y) return x;
	else return y;
	
}
