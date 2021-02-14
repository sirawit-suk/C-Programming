#include <stdio.h>

int main(){

	int size;
	int m,n;
	
	scanf("%d %d",&m,&n);
	
	if(m >= 1 && n <=100){

		long int a[m][n];
		long int b[m][n];
		long int c[m][n];
	
		for(int i=0; i<m ; i++){
			for(int j=0; j<n ; j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0; i<m ; i++){
			for(int j=0; j<n ; j++){
				scanf("%d",&b[i][j]);
			}
		}
		
		for(int i=0; i<m ; i++){
			for(int j=0; j<n ; j++){
				c[i][j] = a[i][j] + b[i][j];
				printf("%d ",c[i][j]);
				
					
				
			}
			printf("\n");
		}
		
	}

	return 0;

	
}
