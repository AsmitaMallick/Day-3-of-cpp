#include<iostream>
using namespace std;
int main()
{
	//################ float, double and long double literals  ##################
	float f = 65.5f;//we can use capital f as well. this shows the number is a float.
	long double d = 65.5l  ;//we can use capital l as well. this shows the number is a double.
	cout<<"the size of 65.5 is: "<<sizeof(65.5)<<endl;
	cout<<"the size of 65.5f is: "<<sizeof(65.5f)<<endl;
	cout<<"the size of 65.5F is: "<<sizeof(65.5F)<<endl;
	cout<<"the size of 65.5l is: "<<sizeof(65.5l)<<endl;
	cout<<"the size of 65.5L is: "<<sizeof(65.5L)<<endl;
	
	return 0;
}
