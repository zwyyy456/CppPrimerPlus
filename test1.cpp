#include <iostream>

int main()
{
	using namespace std;
	const int nInchPerFeet = 12;
	cout << "please enter your height(inch)____\b\b\b\b";
	int iHeightInch;
	cin >> iHeightInch;
	int iHeightFeet = iHeightInch / nInchPerFeet;
	int remainder = iHeightInch % nInchPerFeet;
	cout << "Height is " << iHeightFeet << " feet " << remainder << " inch\n";
	return 0;
	//test for git
}