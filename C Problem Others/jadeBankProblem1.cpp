#include <stdio.h>

int main() {

	int inputMoney;
	int pan,haroi,roi;
	int remainder1,remainder2,remainder3;
	
	scanf("%d",&inputMoney);
	
	pan = inputMoney/1000;
	remainder1 = inputMoney%1000;
	haroi = remainder1/500;
	remainder2 = remainder1%500;
	
	roi = remainder2/100;
	remainder3 = remainder2%100;
	
	if(remainder3 != 0){
		printf("Error");
	}
	else
	{
		//printf("%d\n",inputMoney);
		printf("pan = %d\n",pan);
		printf("haroi = %d\n",haroi);
		printf("roi = %d\n",roi);
	}

	

	

}
