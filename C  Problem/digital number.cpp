#include <stdio.h>
#include <math.h>


//ZERO  0
void zero1(){
		printf(" __  ");
}
void zero2(){
		printf("|  | ");
}
void zero3(){
		printf("|__| ");
}

//ONE   1
void one1(){
		printf("    \n");
			
}
void one2(){
		printf("   |\n");
				
}
void one3(){
		printf("   |\n");
}


main(){
	
	char a[10];
	scanf("%s",&a[10]);
	printf("%s",a[10]);

	for(int i = 0 ; i <10 ; i++){
		printf("%s",a[i]);
	}


/*
	switch(number){
			case '0':
				zero1();
				break;
			case '1':
				one1();
				break;
			default :
				
	
	}
*/	
}
