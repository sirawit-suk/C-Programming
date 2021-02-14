#include<iostream>
using namespace std;

int main()
{
	/*string n="1234";
	int A=1;
	int temp=0;
	for(int i=n.length()-1;i>=0;i--,A*=10)
	{          // '1' -> 51 - 48 = 3 * 10
		temp = temp + (n[i]-'0')*A;
	}
	cout << temp;*/
	int n = 1234;
	int temp=1000;
	for(int i=0;i<4;i++)
	{
		cout << n/temp << endl;
		temp/=10;
	}
}
