/*
 Elanna Grossman
 Application representing merchandise with user defined classes using STL
 Driver Application file
*/

#include <map>
#include <string>
#include <iostream>

#include "MapObjects.h"
#include "Supplier.h"

using namespace std;

int main()
{
    MerchRep merch1("Industrial Grade Widget", "A higher quality widget that is more durable the basic widget.", "Hardware Distributors of Southern AZ", "email1@example.com", 12345, 1000, 50, 100.00);

    MerchRep merch2("Basic Widget", "Basic widget, cheapest option.", "Chengdu Supply Co.", "email2@example.com", 22222, 999, 200, 20.00);

    MerchRep merch3("Doohickey", "Costs more than it should.", "Chengdu Supply Co.", "email3@example.com", 54321, 2000, 10, 400.00);

    map<int, MerchRep>merchMap; //key is itemNum

    merchMap[merch1.getItemNum()] = merch1;

    merchMap[merch2.getItemNum()] = merch2;

    merchMap[merch3.getItemNum()] = merch3;

    map<int, MerchRep>::const_iterator merchMapIter;

    merchMapIter = merchMap.begin();//iterator to access key

    for (unsigned int i = 0; i < merchMap.size(); i++)
    {
        cout << merchMap[merchMapIter->first].toString() << "\n";
        merchMapIter++;
    }//end for

    return 0;
}//end main
