#include <iostream>
using namespace std;
main()
{
	int side;
	cout << "Enter the number of sides of the polygon: " ;
	cin >> side;
	int angle=(side-2)*180;
	cout << "The sum of internal angles of a " << side << "-sided polygon is: " << angle << " degrees";
}
