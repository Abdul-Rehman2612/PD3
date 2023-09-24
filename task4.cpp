#include <iostream>
using namespace std;
main()
{
	float imposter,player_count;
	cout << "Enter Imposter Count: " ;
	cin >> imposter;
	cout << "Enter Player Count: " ;
	cin >> player_count;
	float  chances=100*(imposter/player_count);
	cout << "Chance of being an imposter: " << chances <<"%" ;
}
