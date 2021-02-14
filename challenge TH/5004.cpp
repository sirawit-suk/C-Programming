#include <iostream>

using namespace std;

int main(){
	
	int primeNum = 0;
	int n = 0;
	int c = 0;

	
	for(int primeNum=1; primeNum<200000; primeNum++){
		n=0;
		for(int i=1; i<200000; i++){
			if(primeNum % i == 0){
				n++;
			}
		}
		
		if(n == 2){
			c++;
			cout << primeNum << " is prime "<< c << endl;
			if(c==10001) cout << "THIS ONE " << primeNum<< endl;
		}else{
			//cout << primeNum << " is not prime"<< endl;
		}
	}	
	
	return 0;
	
}
