#include <iostream>
using namespace std;
main()
{
	int square_mtrs_paint,width,height,walls_painted;
	cout << "Number of square meters you can paint: ";
	cin >> square_mtrs_paint ;
	cout << "Width of the single wall (in meters): ";
	cin >> width ;
	cout << "Height of the single wall (in meters): ";
	cin >> height ;
	walls_painted=square_mtrs_paint/(width*height);
	cout << "Number of walls you can paint: " << walls_painted ;
}