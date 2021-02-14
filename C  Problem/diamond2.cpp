#include <stdio.h>
#include <math.h>
main(){
	
	int a=0,c=0,A,B,x;
	int i=0;
	int j=0;
	int d=0;
	
	scanf("%d",&x);
	
	for(i=1 ; i<=2*x-1 ; i++ ){      //Start Row

		A= abs(x-1-a); //A = absolute
		
		for(j=1 ; j<=A ; j++){  //Start Colomn
			
			printf("  ");
			
		}
		
		if(i<=x){
		
					for(d=1 ;d<=i ; d++){  //Dots Repeat follow by line upside
					printf("*   ");
					}
		}
		else	
		{
			
					for(d=2*x-1 ;d>=1+c ; d--){  //Dots Repeat follow by line downside
					
					printf("*   ");
					
					}
					
					
		}
		c++;
		a++;
		printf("\n");	//New Line  
									//End Colomn
	}								//End Row
	
	
	
}
