#include <stdio.h>
//CE BOOSTUP 8 Donut
//[$uspect Down] P'Pop 1D

//POP VERSION USED V.1

main() {

	//6,9,20
	int inputNum;
	int sum;
	int zero = 0;
	
	scanf("%d",&inputNum);

	for(int a = 0; a<=16 ; a++){
		for(int b = 0; b<=11 ; b++){	
			for(int c = 0; c<=5 ; c++){
				
				sum = (a*6) + (b*9) + (c*20);

				if(sum<=100){
					if(sum == inputNum){
						if(inputNum !=0){
							printf("%d,%d,%d\n",a,b,c);
							zero++;
						}
					}
				}	
			}
		}
	}
	if(zero == 0){
		printf("no\n");
	}else{	
		zero=0;
	}
	
}


//POP VERSION TEST CASE V.1

//main() {
//
//	//6,9,20
//	int inputNum;
//	int sum;
//	int zero = 0;
//	
//	scanf("%d",&inputNum);
//	
//	for(int i = 0; i<=100; i++){
//		inputNum = i;
//		printf("%d\n",inputNum);
//		for(int a = 0; a<=16 ; a++){
//			for(int b = 0; b<=11 ; b++){	
//				for(int c = 0; c<=5 ; c++){
//					
//					
//					sum = (a*6) + (b*9) + (c*20);
//					
//					if(sum<=100){
//						if(sum == inputNum){
//							if(inputNum !=0){
//								printf("%d,%d,%d\n",a,b,c);
//								zero++;
//							}
//						}
//					}	
//				}
//			}
//		}
//		if(zero == 0){
//			printf("no\n");
//		}else{	
//			zero=0;
//		}
//		printf("\n");
//	}
//	
//}


//RACH VERSION TEST CASE V.1

//#include "iostream"
//
//int main() {
//
//    int n;
//
//    std:: cin >> n;
//
//    int a, b, c;
//    int count = 0;
//
//	for(int n=0 ; n<=100 ; n++){
//		printf("%d\n",n); 
//		for(int i = n/20; i > -1; i--) {
//	
//	        a = n - (20 * i);
//	
//	        for(int k = a/9; k > -1; k--) {
//	
//	            b = a - (9 * k);
//	
//	            for(int m = b/6; m > -1; --m) {
//	
//	                c = b %6;
//	
//	                if(c == 0) {
//	                    printf("%d,%d,%d\n", m, k, i); 
//	                    count ++;
//	                    break;
//	                }
//	            }
//	        }
//	    }
//	    printf("\n");
//	}
//	    
//
//    if(count == 0)
//        std:: cout << "no";
//
//}




    
