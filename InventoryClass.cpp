#include <iostream>   
#include <thread>
#include <chrono>
using namespace std;

class Inventory 
{
private: 
    int itemnumber, quantity;
    double cost;
public:
    void constructor ()
    {
        itemnumber = 0, quantity = 0, cost = 0;
    }
    void constructor2(int itemnum, int quant, double cos)
    {
        getItemNumber(itemnum);
        getQuantity(quant);
        getCost(cos);
    }
    void getTotalCost ()
    {
        cout << "Item #" << itemnumber << " costs $" << cost << " per unit." << endl;
        cout << "Currently have " << quantity << " units." << endl;
        cout << "Total monetary value is $" << cost * quantity << endl;
        cout << "Logging..." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << " ...success!" << endl;
    }
    void getItemNumber(int itemnum)
    {
        itemnumber = itemnum;
    }
    void getQuantity(int quant)
    {
        quantity = quant;

    }
    void getCost(int cos)
    {
        cost = cos;
    }
};

int main()
{
Inventory values;
int itemnumber, quantity, cost, totalcost, n = 0;
string answer;

cout << endl;
cout << "Welcome to Walmart's Inventory Manager! I'm Karen. I'll be your automated assistant for today." << endl;

cout << "You are currently in 'Adding Items' mode. Would you like to change the mode (y/n)? ";
cin >> answer;

cout << endl;
cout << "Sorry! Only the Administrator can perform that operation. Commencing with 'Adding Items' mode." << endl;
cout << endl;

while (n == 0)
{
    cout << "What is the item number of the item you would like to log? ";
    cin >> itemnumber;

    cout << "What quantity of the item are you are logging? ";
    cin >> quantity;

    cout << "What is the cost per unit (in $) of the item you are logging? ";
    cin >> cost;
    cout << endl;

    values.constructor();
    values.constructor2(itemnumber, quantity, cost);
    values.getTotalCost();
    cout << endl;

    cout << "Would you like to add another item? Enter in 0 if you wish to do so. If not, enter any number. ";
    cin >> n;
   
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
}

return 0;
}