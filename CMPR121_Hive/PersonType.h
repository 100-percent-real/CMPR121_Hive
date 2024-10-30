#pragma once
#include <string>
using namespace std;
#ifndef PersonType_H
#define PersonType_H
class PersonType {

	// Public interface
public:
	//Default Constructor
	PersonType();
	//Overloaded constructor
	PersonType(string newFName, string newLName, int SSN);

	// getters or accessors
	string getFirstName() const;
	string getLastName() const;
	int getSSN() const;


	// Setters or mutators
	void setPersonInfo(string newFName, string newLName, int newSSN);
	void printName();
	void printPersonInfo();
	void printSSN();
	//Destructor
	~PersonType();
private:
	string fName;
	string lName;
	int SSN = 0;


};
#endif
