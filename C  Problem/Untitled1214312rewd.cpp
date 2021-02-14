#include<stdio.h>
main()
{
	int i[5]={30,40,50,60,70};
	int *p;
	p=i;
	printf("%d %d",i[2],*(p+2));
}
