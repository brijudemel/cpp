#include<iostream>
using namespace std;
int main()
{
	int a;
	a = sizeof(char);
	cout<<"Size of char: "<<a<<" byte\n";
	a = sizeof(int);
	cout<<"Size of int: "<<a<<" bytes\n";
	a = sizeof(float);
	cout<<"Size of float: "<<a<<" bytes\n";
	a = sizeof(double);
	cout<<"Size of double: "<<a<<" bytes\n";
	
}
