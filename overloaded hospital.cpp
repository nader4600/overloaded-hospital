#include<iostream>
using namespace std;
int calculate_Charges(int days, int daily_rate, int Medical_charges, int services_charges)
{
	return  (daily_rate * days) + Medical_charges;
}
int calculate_Charges (int Medical_charges, int services_charges)
{
	return Medical_charges + services_charges;
}
int main()
{
	int choice, Days, daily_rate, Medical_charges, services_charges;
	cout << "The patient was admitted in press 1 or press 2 for out" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "How much Days you have spent in Hospital : " << endl;
		cin >> Days;
		cout << "How much is daily rate" << endl;
		cin >> daily_rate;
		cout << "How much is daily Medical Charges : " << endl;
		cin >> Medical_charges;
		cout << "How much is hospital services Charges : " << endl;
		cin >> services_charges;
		int alculate_charges = calculate_Charges(Days, daily_rate, Medical_charges, services_charges);
		cout << "Total charges of in patient is : " << alculate_charges << endl;
	}
	else
	{
		cout << "How much is hospital services Charges : " << endl;
		cin >> services_charges;
		cout << "How much is daily Medical Charges : " << endl;
		cin >> Medical_charges;
		int charges=calculate_Charges(Medical_charges, services_charges);
		cout << "Total charges of in patient is : " << charges;
	}


}