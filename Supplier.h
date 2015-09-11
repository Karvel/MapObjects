/*
 Elanna Grossman
 Application representing merchandise with user defined classes using STL
 Supplier class for supplier data
 Header Interface file
*/

#ifndef SUPPLIER
#define SUPPLIER

#include <iostream>
#include <string>

using namespace std;

class Supplier
{
public:
    Supplier() ; //default constructor
    Supplier(string, string, int); //constructor

    //setter methods
    void setSupplierName(string);
    void setEmailAdd(string);
    void setSupplierID(int);

    //getter methods
    string getSupplierName();
    string getEmailAdd();
    int	   getSupplierID();

	void setValues(Supplier&);
	void getValues(Supplier);

    string toString();

private:
    string supplierName,
           emailAdd;
    int    supplierID;
};//end Supplier

#endif//SUPPLIER
