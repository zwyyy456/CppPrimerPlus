#include <iostream>

int main()
{
	using namespace std;
	int iFeet, nInch;
	double dbPound;
	const double dbInchPerFoot = 12;
	const double dbInchPerMeter = 0.0254;
	const double dbPoundPerKg = 2.2;
	cout << "Please enter your height and weight: " << endl;
	cin >> iFeet;
	cin >> nInch;
	cin >> dbPound;
	double dbHeightInInch = iFeet * 12 + nInch;
	double dbHeight = dbHeightInInch * 0.0254;
	double dbWeight = dbPound / 2.2;
	double dbBmi = dbWeight / dbHeight /dbHeight;
	cout << "Your BMI is : " << dbBmi << endl;
	return 0;
}