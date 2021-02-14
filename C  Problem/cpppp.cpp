#include<iostream>
using namespace std;

class Student{
	
	public:
		string name;
		string surname;
		int number;
		Student(string a,string b,int c){
			name = a;
			surname= b;
		    number= c;	
		}
		Student(){
			name = "DEFA";
			surname= "DEFAU";
		    number= 012;
		}
		
		
	void info(){
		cout <<  name << " " << surname << " " << number << endl;
	}
	
};


main(){
	
	Student no1("ABC","EDF",123),no2;
	
	no1.info();
	no2.info();
	
}
