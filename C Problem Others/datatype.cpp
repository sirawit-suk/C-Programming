#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>



int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

	char x = '#';
	printf("%c",x);
	
	char z[] = {65,'a','c','z'};

	for(int i=0 ; i<10; i++){
		printf("%c\t",z[i]);
		printf("1\t2");
		printf("\\//");
	}
	
	x = -1;
	if((true||true)&&false) x=1;
	else x=0; 
	printf("\n\n\n\n%d",x);
	
	int v = 1;
	switch(v){
		
		case 1:	printf("F");
				break;
		case 2: printf("T");
		
		
	}

    return 0;
}
