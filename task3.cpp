#include <iostream>
using namespace std;
main()
{
	float init_vel,acceleration,time,final_vel;
	cout << "Enter Initial Velocity (m/s): " ;
	cin >> init_vel;
	cout << "Enter Acceleration (m/s^2): " ;
	cin >> acceleration;
	cout << "Enter Time (s): " ;
	cin >> time;
	final_vel=acceleration*time+init_vel;
	cout << "Final Velocity (m/s): " << final_vel ;
}
