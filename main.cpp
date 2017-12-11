//A program that test my implementation of a class named DynamicStringArray
//that the behavior of a vector of strings. In other words, a
//DynamicStringArray object can grow and shrink while the program is running.
#include <iostream>
#include <cstdlib>
#include "dynamicstringarray.h"

using namespace std;

void input(DynamicStringArray& a);
//Reads user input into DynamicStringArray object a.

void output(DynamicStringArray& a);
//Precondition: DynamicStringArray a has been filled with elements.
//Postcondition: Prints out all the elements stored in DynamicStringArray
//object a.

int main()
{
    DynamicStringArray a;
    input(a);
    output(a);

    return 0;
}

void input(DynamicStringArray& a)
{
    cout<<"Enter sentences, one per line. Press '-' key to stop."<<endl; 
    string input;

    getline(cin, input);
    while(input != "-")
    {
        a.addEntry(input);
        getline(cin, input);
    }
    cout<<endl;
}

void output(DynamicStringArray& a)
{
    cout<<"Dynamic array elements:"<<endl;
    for (int i = 0; i < a.getSize(); i++)
        cout<<a.getEntry(i)<<endl;
    cout<<endl;

    cout<<"Would you like to remove a string from the dynamic array (y/n)? ";
    char ans;
    cin>>ans;
    cout<<endl;

    if (ans == 'y' || ans == 'Y')
    {
        cout<<"Okay. Which string will it be? ";
        string target;
        cin>>target;
        cout<<endl;

        if (a.deleteEntry(target))
        {
            cout<<target<<" has been removed from the dynamic array."<<endl<<endl;
            cout<<"Updated dynamic array elements:"<<endl;
            for (int i = 0; i < a.getSize(); i++)
                cout<<a.getEntry(i)<<endl;
            cout<<endl;
        }
        else
            cout<<"String to delete NOT FOUND\n";
    }
}
