#include<stdio.h>
void swap(int*,int*);

main(){
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);

}
void swap(int* a,int* b){
	int x,y;
	x = *a;
	y = *b;
	*b = x;
	*a = y;
}
