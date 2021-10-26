#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;


	bool R;
	if (y > x / 2) {
		if (pow(x - 2, 2) + pow(y, 2) <= 4) {
			R = true;
		}
		else R = false;
	}
	else R = false;

	//if ((y > x / 2) && (pow(x - 2, 2) + pow(y, 2) <= 4))
	//	r = true;
	//else r = false;

	cout << ((R) ? "yes, it belongs" : "no, it doesn't belong");
}