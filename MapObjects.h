/*
 Elanna Grossman
 Application representing merchandise with user defined classes using STL
 Header Interface file
*/

#ifndef MERCHREP
#define MERCHREP

#include <string>

#include "Supplier.h"

using namespace std;

class MerchRep
{
public:
    MerchRep() ; //default constructor
    MerchRep(string, string, string, string, int, int, int, double); //constructor

    //setter methods
    void setItemName(string);
    void setItemDesc(string);
    void setSupplierName(string);
    void setEmailAdd(string);
    void setSupplierID(int);
    void setItemNum(int);
    void setQuantity(int);
    void setPrice(double);

    //getter methods
    string getItemName ();
    string getItemDesc ();
    string getSupplierName();
    string getEmailAdd();
    int	   getSupplierID();
    int	   getItemNum ();
    int	   getQuantity();
    double getPrice();

    void setValues(MerchRep&, MerchRep&, MerchRep&);

    string toString();

private:
    Supplier suppObj;
    string itemName,
           itemDesc;
    int itemNum,
        quantity;
    double price;
};//end MerchRep

#endif//MERCHREP
