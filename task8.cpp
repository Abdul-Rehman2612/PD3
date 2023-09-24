#include <iostream>
using namespace std;
main()
{
	float veg_incoins,fruit_incoins,earningsinrps;
	int total_veg,total_fruit;
	cout << "Enter vegetable price per kilogram (in coins): " ;
	cin >> veg_incoins ;
	cout << "Enter fruit price per kilogram (in coins): " ;
	cin >> fruit_incoins ;
	cout << "Enter total kilograms of vegetables: ";
	cin >> total_veg ;
	cout << "Enter total kilograms of fruits: ";
	cin >> total_fruit ;
	earningsinrps=(veg_incoins*total_veg+fruit_incoins*total_fruit)/1.94;
	cout << "Total earnings in Rupees (Rps): " << earningsinrps ; 
}
