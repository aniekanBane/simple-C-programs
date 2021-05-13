//
//  tempConv.cpp
//  TempConv
//
//  Created by Aniekan Umanah on 15/05/2019.
//  Note: This program asks the user to enter a temperature in celsuis and displays its equivalent in farenheit.

#include <iostream>
using namespace std;

int main(void)
{
    // declare and initialise variables
    int c=0, f=0;
    //prompt user to enter the temperature in celsuis
    cout << "\nEnter the temperature in celsius: ";
    cin >> c;
    f = (c * 1.8) +32; // convert to farenheit
    cout << c << "°C = " << f << "°F" <<endl; // display results
    
   return 0;
}
