#include <iostream>
using namespace std;
main()
{
	string movie_name;
	float adlt_tkt_price,chld_tkt_price,adlt_tkt_sold,chld_tkt_sold;
	float perecntage_to_be_donated;
	cout << "Enter the movie name: " ;
	cin >> movie_name ;
	cout << "Enter the adult ticket price: $" ;
	cin >> adlt_tkt_price ;
	cout << "Enter the child ticket price: $";
	cin >> chld_tkt_price;
	cout << "Enter the number of adult tickets sold: ";
	cin >> adlt_tkt_sold;
	cout << "Enter the number of child tickets sold: ";
	cin >> chld_tkt_sold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> perecntage_to_be_donated;
	cout << "" << endl;
	float total_amount=adlt_tkt_price*adlt_tkt_sold+chld_tkt_price*chld_tkt_sold;
	float charity=total_amount*perecntage_to_be_donated;
	charity=charity/100;
	float remaining=total_amount-charity;
	cout << "Movie: " << movie_name << endl;
	cout << "Total amount generated from ticket sales: $" << total_amount << endl ;
	cout << "Donation to charity (" << perecntage_to_be_donated << "%): $" << charity << endl;
	cout << "Remaining amount after donation: $" << remaining;
	
}
