/*
 Elanna Grossman
 Application representing merchandise with user defined classes using STL
*/

#include <string>
#include <sstream>

#include "MapObjects.h"

using namespace std;

MerchRep::MerchRep()
{
    setItemName("");
    setItemDesc("");
    setSupplierName("");//replace with supplier object
    setEmailAdd("");
    setSupplierID(0);
    setItemNum(00000);
    setQuantity(0);
    setPrice(0);
}//end MerchRep

MerchRep::MerchRep(string itemName, string itemDesc, string supplierName, string emailAdd, int supplierID, int itemNum, int quantity, double price)
{
    setItemName(itemName);
    setItemDesc(itemDesc);
    setSupplierName(supplierName);//replace with supplier object
    setEmailAdd(emailAdd);
    setSupplierID(supplierID);
    setItemNum(itemNum);
    setQuantity(quantity);
    setPrice(price);
}//end MerchRep

//setters
void MerchRep::setItemName(string itemName)
{
    this->itemName = itemName;
}

void MerchRep::setItemDesc(string itemDesc)
{
    this->itemDesc = itemDesc;
}

void MerchRep::setSupplierName(string supplierName)
{
    this->suppObj.setSupplierName(supplierName);
}

void MerchRep::setEmailAdd(string emailAdd)
{
    this->suppObj.setEmailAdd(emailAdd);
}

void MerchRep::setSupplierID(int supplierID)
{
    this->suppObj.setSupplierID(supplierID);
}

void MerchRep::setItemNum(int itemNum)
{
    this->itemNum = itemNum;
}

void MerchRep::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void MerchRep::setPrice(double price)
{
    this->price = price;
}

//getters
string MerchRep::getItemName()
{
    return itemName;
}

string MerchRep::getItemDesc()
{
    return itemDesc;
}

string MerchRep::getSupplierName()
{
    return this->suppObj.getSupplierName();
}

string MerchRep::getEmailAdd()
{
    return this->suppObj.getEmailAdd();
}

int MerchRep::getSupplierID()
{
    return this->suppObj.getSupplierID();
}

int MerchRep::getItemNum()
{
    return itemNum;
}

int MerchRep::getQuantity()
{
    return quantity;
}

double MerchRep::getPrice()
{
    return price;
}

//pass merch1 by ref
void MerchRep::setValues(MerchRep &merch1, MerchRep &merch2, MerchRep &merch3)
{
    merch1.setItemName("Industrial Grade Widget");
    merch1.setItemDesc("A higher quality widget that is more durable the basic widget.");
    merch1.setSupplierName("Hardware Distributors of Southern AZ");
    merch1.setEmailAdd("email@example.com");
    merch1.setSupplierID(12345);
    merch1.setItemNum(1000);
    merch1.setQuantity(50);
    merch1.setPrice(100.00);

    merch2.setItemName("Basic Widget");
    merch2.setItemDesc("Basic widget, cheapest option.");
    merch2.setSupplierName("Chengdu Supply Co.");
    merch2.setEmailAdd("email@example.com");
    merch2.setSupplierID(12345);
    merch2.setItemNum(999);
    merch2.setQuantity(200);
    merch2.setPrice(20.00);

    merch3.setItemName("Doohickey");
    merch3.setItemDesc("Costs more than it should.");
    merch3.setSupplierName("Chengdu Supply Co.");
    merch3.setEmailAdd("email@example.com");
    merch3.setSupplierID(12345);
    merch3.setItemNum(2000);
    merch3.setQuantity(10);
    merch3.setPrice(400.00);
}//end setValues

string MerchRep::toString() //must invoke Supplier Object toString
{
    stringstream sstrm;

    sstrm << "Item Name              : " << itemName           << "\n"
          << "Item description       : " << itemDesc           << "\n"
          << suppObj.toString()                                << "\n"
          << "Item number            : " << itemNum            << "\n"
          << "Item quantity          : " << quantity           << "\n"
          << "Item price             : " << price              << "\n";

    return sstrm.str();
}//end toString
