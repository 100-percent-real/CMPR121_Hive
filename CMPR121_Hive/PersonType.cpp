#include <iostream>
#include <string>
#include "PersonType.h"
using namespace std;


//Default Constructor
PersonType::PersonType()
{
	SSN = 0;


}

//Overloaded constructor
PersonType::PersonType(string newFName, string newLName, int newSSN)
{
	fName = newFName;
	lName = newLName;
	SSN = newSSN;
}

string PersonType::getFirstName() const
{
	return fName;
}
string PersonType::getLastName() const
{
	return lName;
}
int PersonType::getSSN() const
{
	return SSN;
}


// Setters or mutators
void PersonType::setPersonInfo(string newFName, string newLName, int newSSN)
{
	fName = newFName;
	lName = newLName;
	SSN = newSSN;
}
void PersonType::printName()
{
	cout << lName << ", " << fName;
}

void PersonType::printPersonInfo()
{

	printSSN();
	cout << " ";
	cout << fName << ", " << lName;
}
void PersonType::printSSN()
{
	int copySSN = SSN;
	string strSSN = to_string(copySSN);
	// displays the SSN in its proper format ###-##-####
	cout << strSSN[0] << strSSN[1] << strSSN[2] << "-" << strSSN[3] << strSSN[4] << "-" << strSSN[5] << strSSN[6] << strSSN[7] << strSSN[8];
}
//Destructor
PersonType::~PersonType()
{
	//Leave empty
}