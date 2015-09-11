/*
 Elanna Grossman
 Application representing merchandise with user defined classes using STL
 Supplier class for supplier data
*/

#include <string>
#include <sstream>

#include "Supplier.h"

using namespace std;

Supplier::Supplier()
{
}//end Supplier

Supplier::Supplier(string supplierName, string emailAdd, int supplierID)
{
	setSupplierName(supplierName);
	setEmailAdd(emailAdd);
	setSupplierID(supplierID);
}//end Supplier

//setters
void Supplier::setSupplierName(string supplierName)
{
	this->supplierName = supplierName;
}

void Supplier::setEmailAdd(string emailAdd)
{
	this->emailAdd = emailAdd;
}


void Supplier::setSupplierID(int supplierID)
{
	this->supplierID = supplierID;
}

//getters
string Supplier::getSupplierName()
{
	return supplierName;
}

string Supplier::getEmailAdd()
{
	return emailAdd;
}

int Supplier::getSupplierID()
{
	return supplierID;
}

void Supplier::setValues(Supplier &supp2)//pass supp2 by ref
{
	supp2.setSupplierName("Industrial Grade Widget");
    supp2.setEmailAdd("A higher quality widget that is more durable the basic widget.");
    supp2.setSupplierID(12345);
}//end setValues

void Supplier::getValues(Supplier supp1)//pass supp1 by ref
{
	cout << supp1.getSupplierName() << "\n\n";
	cout << supp1.getEmailAdd()     << "\n\n";
	cout << supp1.getSupplierID()   << "\n\n";
}//end getValues

string Supplier::toString()
{
	stringstream sstrm;

	sstrm << "Supplier Name          : " << supplierName << "\n"
    	  << "Supplier contact email : " << emailAdd     << "\n"
		  << "Supplier ID            : " << supplierID;
    return sstrm.str();
}
