#include <iostream>
using namespace std;
main()
{
	int minutes;
	cout << "Number of Minutes: " ;
	cin >> minutes;
	minutes=minutes*60;
	int FPS;
	cout << "Frames per Second: " ;
	cin >> FPS;
	int frames=FPS*minutes;
	cout << "Total Number of Frames: " << frames ;
}
