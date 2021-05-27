//
//
//  doWhileLoop
//
//  Created by Aniekan Umanah
//  This program demonstrates the function of a do while loop

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    char yesorNo; // variable to hold character input
    // get input from user at the end of loop
    do
    {
         cout << "\nYou must type a Y or N ";
         cout << "Do yo want to display the quotation\n(Y/N)?:";
         cin >> yesorNo;
        // test if user has entered appropriate characters
    }while((yesorNo !='Y' && yesorNo !='y') &&
           (yesorNo = 'N' && yesorNo != 'n'));
    
    // display quotation if required
    if (yesorNo == 'Y' || yesorNo == 'y')
    {
        cout << "\nNeither a borrower or a lender be - Shakespeare"<<endl;
    }
    return 0; // exit program
}
