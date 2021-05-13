//
//  switch-case.cpp
//  switch-case
//
//  Created by Aniekan Umanah on 03/12/2018.
//  Copyright © 2018 Aniekan Umanah. All rights reserved.
//  NOTE : This program asks the user for two input resistor values, and gives the option to either add them in series or parallel to give the total resistance Rx.

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    // declare variables
    float TRs, TRp, R1, R2;
    int num;
    // prompt user to input resistor values
    cout << "Enter R1\n";
    cin >> R1;
    cout<<"Enter R2\n";
    cin >> R2;
    // prompt user to make a choice
    cout << "Enter:\n 1 for Series connection\n 2 for Parallel connection\n";
    cin >> num;
    switch(num)
    {
        case 1: TRs = R1 + R2; // series case
            cout << "Rx is = " << TRs << "ohms\n";break;
        case 2: TRp = (R1 * R2)/(R1 + R2); // parallel case
            cout << "Rx is = " << TRp << "ohms\n";break;
        default: // out of case range
            // display error message
            cout << "You must only choose between 1 and 2.\n";
            cout << "Please run the program again.\n";
    }
    
    return 0;
}
