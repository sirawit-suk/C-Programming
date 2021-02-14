#include <iostream>

using namespace std;

main(){
	
	char string[10000] = "";
	int big = 0;
	int small = 0;
	int length = 0;
	
	cin >> string;
	while(string[length] != '\0'){
		length++;
	}
	
	for(int i=0; i<length; i++){
		if(string[i] >= 65 && string[i] <=90){
			big++;
		}
		if(string[i] >= 97 && string[i] <=122){
			small++;
		}
	}

	if(big>0 && small>0){
		cout << "Mix" ;	
	}
	else if(big>0){
		cout << "All Capital Letter";
	}
	else if(small>0){
		cout << "All Small Letter";
	}
		
	
	
}
