//
//  main.cpp
//  CircleArea
//
//  Created by Aniekan Umanah on 13/05/2021.
//  This program calculates the area of a circular disc

#include <iostream>

using namespace std;
#define PI 3.1415926 //define directive, replace the occurence of PI with the value

int main(int argc, const char * argv[])
{
    float radius, area; // declare varaibles
    // prompt user to enter the radius length in millimeters
    cout << "Enter the radius of the disc in mm\n";
    cin >> radius;
    area = PI * (radius*radius); // area of a circle
    cout << "\nThe area of the disc is " << area << "mm^2\n"; // print result
    return 0; // exit
}
