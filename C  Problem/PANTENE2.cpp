#include <stdio.h>
int main()
{
char a[]="0123456789abcdefghij";
int	b=1234567890;
char c[]="0123456789";
int	d=12345678;
	
 for(int i=1; i<=4; i++){
 	printf("%s",a);
 }	
 	printf("\n\n");
 
 for(int i=1; i<=4; i++){
 	printf("%20d",b);
 }	
 	printf("\n");
 	
 for(int i=1; i<=4; i++){
 	printf("%-20s",c);
 }	
 	printf("\n");
 
 for(int i=1; i<=4; i++){
 	printf("%20d",b);
 }	
 	printf("\n");
 
 for(int i=1; i<=10; i++){
 	printf("%d",d);
 }	
	printf("\n");
	
 	
 printf("%9d%9d%9d%9d%9d%9d%9d%9d\n",1,12,123,1234,12345,123456,1234567,12345678);
 
 for(int i=1; i<=5; i++){
 	printf("%-16d",d);
 }
 

 return 0;

}
