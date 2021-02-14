// C++ program to demonstrate implementation 
// of Inheritance 

#include <bits/stdc++.h> 
using namespace std; 

//Base clas
class Parent 
{ 
	public: 
	int id_p; 
  	int id_v;
 
}; 

// Sub class inheriting from Base Class(Parent) 
class Child : public Parent 
{ 
	public: 
	int id_c; 
}; 

//main function 
int main() : public Child
{ 
	
		Child obj1; 
		
		// An object of class child has all data members 
		// and member functions of class parent 
		obj1.id_c = 7; 
		obj1.id_p = 91; 
  		obj1.id_v = 3;
  		
		cout << "Child id is " << obj1.id_c << endl; 
		cout << "Parent id is " << obj1.id_p << endl; 
 		cout << "Parent id is " << obj1.id_v << endl; 
		
		return 0; 
} 

