#include<stdio.h>
int power(int a,int b){
	if(!b) return 1;
	if(b%2) return power(a,b-1)*a;
	int t=power(a,b>>1);
	return t*t;
}
int n,m;
main(){
	scanf("%d %d",&n,&m);
	printf("%d",power(n,m));
}
