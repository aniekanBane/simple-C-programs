//
//  logical.cpp
//  Logical
//
//  Created by Aniekan Umanah on 12/11/2018.
//  Copyright © 2018 Aniekan Umanah. All rights reserved.
//  NOTE: This program awards grades to the candidate within a specified mark range.
 
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // declare varaibles
    int mark;
    char Grade;
    cout<<"\nEnter awarded mark: "; // ask to enter the mark
    cin>> mark; // input mark
    // conditional statements
    if (mark >= 70)
    {
        Grade = 'A';
        cout << Grade << " is the grade" <<endl;
        cout << "Remarks: Excellent !" <<endl;
    }
    else if (mark < 70 && mark >= 60 )
    {
        Grade = 'B';
        cout << Grade << " is the grade" <<endl;
        cout << "Remarks: Above average !" <<endl;
    }
    else if (mark < 60 && mark >=50)
    {
        Grade = 'C';
        cout << Grade << " is the grade" <<endl;
        cout << "Remarks: Average" <<endl;
    }
    else if (mark < 50 && mark >=40)
    {
        Grade = 'D';
        cout << Grade << " is the grade" <<endl;
        cout << "Remarks: Pass" <<endl;
    }
    else
    {
        Grade = 'U';
        cout << Grade << " is the grade" <<endl;
        cout << "Remarks: Mark is below 40%. Candidate must Resit" <<endl;
    }
    return 0; //exit
}
