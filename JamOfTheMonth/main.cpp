#include <iostream>
using namespace std;

int main()
{
	char whichPackage;
	int howManyJams = 0;
	int monthlyFee = 0;
	int jamsIncluded = 0;
	int jamPrice = 0;
	int totalCost;

	cout << "What package do you own? A, B or C" << endl;
	cin >> whichPackage;
	cout << "How many jams, jellies, or preserves did you pruchas this month?" << endl;
	cin >> howManyJams;

	// Monthly default values for packages
	if (whichPackage == 'A' || whichPackage == 'a')
	{
		monthlyFee = 8;
		jamsIncluded = 2;
		jamPrice = 5;
	}
	else if (whichPackage == 'B' || whichPackage == 'b')
	{
		monthlyFee = 12;
		jamsIncluded = 4;
		jamPrice = 4;
	}
	else if (whichPackage == 'C' || whichPackage == 'c')
	{
		monthlyFee = 15;
		jamsIncluded = 6;
		jamPrice = 3;
	}
	else
	{
		cout << "The package you selected is not valid." << endl;
	}

	// Total cost calculation
	if (howManyJams <= jamsIncluded)
	{
		// charged monthly fee
		totalCost = monthlyFee;
	}
	else
	{
		// charge monthly fee plus the difference multipled by the jamPrice
		totalCost = monthlyFee + (howManyJams - jamsIncluded) * jamPrice;
	}

	cout << "You owe: $" << totalCost << endl;
	return 0;
}