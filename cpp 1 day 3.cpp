#include<iostream>
using namespace std;
int main()
{
	int c=44;//global variable
	int a,b,c;
	cout<<"enter the value of a: "<<endl;
	cin>>a;
	cout<<"enter the value of b: "<<endl;
	cin>>b;
	c = a+b;
	cout<<"sum of a and b is: "<<c<<endl;
	cout<<"the global c is "<< ::c;//to print the global variable but its not working here.
	
	
	
	
	
	
	
	
	return 0;
}
