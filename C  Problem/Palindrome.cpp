#include<stdio.h>
#include<string.h>

main(){
	
	//Test Parindom
	while(1){
	
		
	int L=0,n=0,c=0;

	char a[100]={};
	
	gets(a);
	L = strlen(a);
	n = L;
	
		for(int i=0;i<L;i++){
			
			if(a[i]==a[--n]){
				c++;
							
			}
			else n--;	
		}
	
	
	
		if(L==c) printf("%s is a Palindrome\n",a);
		else	 printf("%s is NOT a Palindrome\n",a);
		
	
	}
	
}
