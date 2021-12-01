#include <iostream>

using namespace std;

int main()
{
	int Route_A_B = 0;
	int Route_B_C = 0;
	int Route_C_D = 0;
	const int hours_day = 24;
	cout << "How many hours from A to B?" << endl;
	cin >> Route_A_B;
	cout << "Yow many hours from B to C?" << endl;
	cin >> Route_B_C;
	cout << "How many hours from C to D?" << endl;
	cin >> Route_C_D;
	cout << "How many hours from A to D - " << Route_A_B + Route_B_C + Route_C_D << endl;
	cout << "How many days - " << (Route_A_B + Route_B_C + Route_C_D) / hours_day << endl;
	cout << "How many hours - " << (Route_A_B + Route_B_C + Route_C_D) % hours_day << endl;

	system("pause");
	return 0;
}
