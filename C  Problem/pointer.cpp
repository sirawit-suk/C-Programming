#include<stdio.h>

main(){
	
	char *p,*q, string[50];
	int a=0,b=0;
	
	scanf("%s",&string);
	
	p = &string;
	q = &string;
	
	while(*q != '\0'){
		q++;
		a++;
	}
	
	while(*p == *(q-1) && *p != '\0'){
		b++;
		p++;
		q--;
	}
	
	
	
	

	if(a==b){
		printf("Palindrome");	
	}
	else{
		printf("Not Palindrome");
	}
	
	
	
	
	
}
