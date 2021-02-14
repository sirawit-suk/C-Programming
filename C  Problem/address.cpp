#include<stdio.h>

main(){
	
	int a = 12;
	int b = 12;
	int *p; //p = pointer 0 = 32 bits
	
	p = &a;
	printf("%X\n",&a);
	printf("%X\n",&b);
	printf("%X\n",&p);
	printf ("-----------\n");
	
	int x=10,y=20,z=30,*p1,*p2;
	p1 = &x;
	p2 = &y;
	printf("%d %d %d %d %d %X %X %X %X %X %X %X\n",x,y,z,*p1,*p2,&x,&y,&z,&p1,&p2,p1,p2);
	
	x=80;
	printf("%d %d %d %d %d %X %X %X %X %X %X %X\n",x,y,z,*p1,*p2,&x,&y,&z,&p1,&p2,p1,p2);
	
	printf("--------------\n");
	
	p1 = &z;
	p2 = p1;
	printf("%d %d %d %d %d\n",x,y,z,*p1,*p2);
	
	*p1=100;
	printf("%d %d %d %d %d\n",x,y,z,*p1,*p2);
	
	printf("----------------------\n");
	
	int i[5]={30,40,50,60,70};
	int *q;
	
	q=i;
	
	printf("%d %d %d %d %d %d %d\n",i[2],*q,*(q+1),*(q+2),*(q+3),q[2],*(i+2));
	
	printf("----------------------\n");
	
	char *s, str[50];
	s = str;
	
	scanf("%s",&str);
	
	while(*s != '\0'){
	//99/889	printf("%c\n",*s);
		s++;
	}
	while(*s != str[0]){
		printf("%c\n",*(s-1));
		s--;
	}
	
	
	
	
	
	
}
