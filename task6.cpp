#include <iostream>
using namespace std;
main()
{
	float sizeofbag,costofbag,areacovered;
	cout << "Enter the size of the fertilizer bag in pounds: " ;
	cin >> sizeofbag;
	cout << "Enter the cost of the bag: $" ;
	cin >> costofbag;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	cin >> areacovered;
	float costoffertilizer=costofbag/sizeofbag;
	cout << "Cost of fertilizer per pound: $" << costoffertilizer << endl;
	float costpersquarefoot=costofbag/areacovered;
	cout << "Cost of fertilizing per square foot: $" << costpersquarefoot;
}
