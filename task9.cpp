#include <iostream>
using namespace std;
main()
{
	int number;
	cout << "Enter a 4-digit number: ";
	cin >> number;
	int a=number%10;
	int b=number/10; 
	int c=b%10;
	int d=b/10;
	int e=d%10;
	int f=d/10;
	int g=f%10;
	int sum=a+c+e+g;
	cout << "Sum of the individual digits: " << sum ; 
	
}