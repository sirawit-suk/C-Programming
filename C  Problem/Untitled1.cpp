#include<stdio.h>

int main(){
	
	char A[3];  	
    for(int j=0; j<4; j++){
    
                                                                                                                                                                                                       

        scanf(" %c",&A[j]);
	}
    
    for(int j=0; j<4; j++){
	
    	for(int i=0; i<A[j]-'A'+1; i++){
        
			printf("%c",A[j]);
    
		}
		
    }  
    
    
    
    return 0;
}



