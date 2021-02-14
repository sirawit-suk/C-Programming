#include<stdio.h>
#include<math.h>

main(){
	
	double x1,x2,x3;
	scanf("%lf %lf %lf",&x1,&x2,&x3);
	
	double a1 = x1*x1;
	double b1 = x2*x2;
	double right1 = x3*x3;
	double left1 = a1+b1; 
	double Error1 = abs(left1-right1);
	
	double a2 = x3*x3;
	double b2 = x1*x1;
	double right2 = x2*x2;
	double left2 = a2+b2; 
	double Error2 = abs(left2-right2);
	
	double a3 = x3*x3;
	double b3 = x2*x2;
	double right3 = x1*x1;
	double left3 = a3+b3; 
	double Error3 = abs(left3-right3);
	
	if(Error1 < 0.00001 || Error2 < 0.00001 || Error3 < 0.00001){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	return 0;
	
}
