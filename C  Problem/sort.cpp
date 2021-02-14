#include<stdio.h>

main(){
	
	int a,b,c;
	int x,y;
	
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){ // first time
		x = a;
		y = b;
		b = x;
		a = y;
	}
	if(b>c){
		x = b;
		y = c;
		c = x;
		b = y;
	}
	if(a>b){ // second time
		x = a;
		y = b;
		b = x;
		a = y;
	}
	if(b>c){
		x = b;
		y = c;
		c = x;
		b = y;
	}
	if(a>b){ // third time
		x = a;
		y = b;
		b = x;
		a = y;
	}
	if(b>c){
		x = b;
		y = c;
		c = x;
		b = y;
	}
	
	printf("%d %d %d",a,b,c);
	
	
	
}
