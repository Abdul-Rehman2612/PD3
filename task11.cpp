#include <iostream>
using namespace std;
main()
{
	int age,times_moved;
	cout << "Enter the person's age: " ;
	cin >> age ;
	cout << "Enter the number of times they've moved: " ;
	cin >> times_moved;
	int average_time_lived=age/(times_moved+1);
	cout << "Average number of years lived in the same house: " << average_time_lived ;
}