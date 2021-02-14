#include<stdio.h>
#include<math.h>


float area(float,float,float,float,float,float);

main(){
	float x1,x2,x3,y1,y2,y3;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	
	printf("%.2f",area(x1,y1,x2,y2,x3,y3));
	
}

float area(float x1,float y1,float x2,float y2,float x3,float y3){
	
	float answer = abs(x1*y2+x2*y3+x3*y1 -x2*y1-x3*y2-x1*y3)/2;
	return answer;

}

