
        /* Headers */

#include <iostream>
#include <fstream> //File stream, disk->C++ <-> C++ -> Disk
#include <cctype> //Checks Type, (eg. C++ isdigit(), functions)
#include <iomanip>
#include <string>
#include <cmath>
    using namespace std;

        /* Classes used */

class account
{
    int acno;       //Account Number
    char name[50];      //Accout Name
    int deposit;        //Deposit ammount
    char type;
public:
    void create_account();  //Function to get data from user
    void show_accoutn() const;  //Function to show data on screen
    void modify();  //Function to add new data
    void dep(int);  //Function to accept amount and add to balance amount
    void draw(int); //Function to accept amount and subtract from balance amount
    void report() const;    //Function to show data in tabular format
    int retacno() const;   //Function to return account number
    int retdeposit() const; //Function to return balance amount
    char rettype() const;   //Function to return type of account
}; //Class ends here

void account::create_account()
{
    cout << "\nEnter The account No. : ";
    cin >> acno;
    cout << "\nEnter the Name of the account Holder : ";
    cin.ignore();
    cin.getline(name, 50);


}