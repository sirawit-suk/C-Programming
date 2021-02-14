#include<iostream>
using namespace std;

int fac(int b)
{
	if(b<2) return 1;
    return b*fac(b-1);
}

int main()
{
	cout << fac(5);
	return 0;
}
