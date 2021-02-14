#include <stdio.h>
int main(){
    char c1,c2,c3;
    scanf("%c %c %c",&c1,&c2,&c3);
    
    char first = c1;
    
    if (c2<first){
    	first = c2;
    }
    else if(c3<first){
    	first = c3;
    }
    
    printf("%c",first);
    
    return 0;
}
