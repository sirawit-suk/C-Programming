#include "iostream"

using namespace std;

int amount;
int x;

int findMax(int a[],int amount){
	
	int max = a[0];
	for(int i=0; i<amount; i++){
		max = std::max(a[i],max);
	}
	return max;
}
int findMin(int a[],int amount){
	
	int min = a[0];
	for(int i=0; i<amount; i++){
		min = std::min(a[i],min);
	}
	return min;
}

main(){

	int max;
	int min;
	
	cin >> amount;
	
	int number[amount];
	
	for(int i=0; i<amount; i++){
		cin >> number[i];
	}
	
	cout << findMin(number,amount) <<endl;
	cout << findMax(number,amount);	
	
}



