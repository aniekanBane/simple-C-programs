//
//  impedance.cpp
//  Impedance
//
//  Created by Aniekan Umanah on 11/11/2018.
//  Copyright © 2018 Aniekan Umanah. All rights reserved.
//  NOTE: This program calulate the impedance Z value of an a.c circuit and its phase angle

#include <iostream>
#include <math.h>          // import math header file
const float PI = 3.14159; //make PI a constant variable
using namespace std;

int main(int argc, const char * argv[])
{ // open
    double R, L, C, f, Xl, Xc, Z, phase_angle; // declare resistance, Elecrical inductance, Capacitance, frequency, Xl, Xc, Impedance, Phase angle
    cout<< "Enter R in ohms\n"; // ask for Resistance
    cin>>R; // input R
    cout<< "Enter L in Henrys\n"; // ask for electrical inductance
    cin>>L; // input L
    cout<< "Enter C in microFarads\n"; // ask for Capacitance
    cin>>C; // input C
    C = C * 1e-06; // conversion of Capacitance to Farads.
    cout<< "Enter f in Hertz\n"; // ask for frequency
    cin>>f; // input f
    Xl = 2*PI*f*L; // calculation for Xl
    
    Xc = 1/(2*PI*f*C); // calculation for Xc
    
    Z = sqrt((R*R) + ((Xl - Xc)*(Xl - Xc))); // calculation for Impedance
    cout<<Z<<"Ω impedance value\n"; // result for impedance
    
    phase_angle = (180/PI) * atan((Xl - Xc)/R); // atan is tan inverse in radian; calculation for Phase angle
    cout<<phase_angle<<"º is the phase angle\n"; // Result of Phase angle
    
    system ("pause");
    return 0;
} // close

