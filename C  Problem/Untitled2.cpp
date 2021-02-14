#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	int n,x;
	cin>>n;
	n--;
	int y=n;
	
	while(y>=-n){
		
		x = -n;
		while(x<=n){
			
			if( abs(y) <= abs( abs(x) - n ) ){
				
				cout<<'*';
				
			}else
				cout<<' ';
			
			x++;
		
		}
		cout<<endl;
		y--;
		
	}
	
	return 0;
}
