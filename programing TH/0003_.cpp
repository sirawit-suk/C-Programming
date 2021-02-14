#include <iostream>

using namespace std;

int main(){

	int size;
	int m,n;
	
	cin >> m >> n;
	
	if(1 <= m && n <=100){
		size = m*n;

		long int a[size];
		long int b[size];
		long int c[size];
	
		for(int i=0; i<size ; i++){
			cin >> a[i];
		}
		for(int i=0; i<size ; i++){
			cin >> b[i];
		}
		
		for(int i=0; i<size ; i++){
			if(i%n==0 && i!=0){
				cout<<endl;
			}
			c[i] = a[i] + b[i];
			cout << c[i] << " ";
		}
		
	}
	


	
}
