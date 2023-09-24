#include <iostream>
using namespace std;
main()
{
	string name;
	float weight_loss;
	cout << "Enter the Name of the Person: " ;
	cin >> name;
	cout << "Enter the target weight loss in kilograms: " ;
	cin >> weight_loss;
	float daysforweightloss=weight_loss*15;
	cout << name << " will need " << daysforweightloss <<" days to lose " << weight_loss << " kg of weight by following the doctor's suggestions" ;
}
