/**
FILE:          		Assignment2_2.cpp
TITLE:         		File contains functions for Section 2 of Assignment 2
SUBMITTED BY:  		Parth Pandya (Student Id : 200468783)
FOR COURSE:    		CS 700
DATE OF CREATION:   12th October 2022
PURPOSE:			This program contains unit test cases of sin and cos function test
**/

# include <iostream>
# include <string>
# include "sin_cos.h"
using namespace std;

int sinval[] = {8666, 6428, 9848, 9396, 3420}; // sin_degrees Real values are stored values of given degrees
int sindeg[] = {120, 140, 80, 110, 160}; // Given degrees values to check
int cosval[] = {9396, 3420, 1736, 1736, 4226}; // cos_degrees Real values are stored values of given degrees
int cosdeg[] = {20, 70, 80, 280, 295}; // Given degrees values to check
int verify, real;
int main(){
    cout << "sin() function test case";  
    for (int n = 0; n < 5; n++){
        verify = sin(sindeg[n]); // output of sin function assigned here
        real = sinval[n]; // True value are assigned here
        cout <<"\nReal value: " << real << ",  " << "Verify value: " << verify << ",  " <<"Degree: " << sindeg[n]<<  endl;
        if (real == verify)  // Verifying True and function returning values from sin() function
            cout << "THIS Test is :" << n + 1 << " Pass  " << endl; // all values are same it will print pass
        else
            cout << "THIS Test is :" << n + 1 << " Fail  " << endl; // all values are different it will print fail
    }

    cout << "\nTest cases for cos() function"; 
    for (int i = 0; i < 5; i++){
        verify = cos(cosdeg[i]);    // output of cos function assigned here
        real = cosval[i];     // True value are assigned here
        cout <<"\nReal value: " << real << ",  " << "Verify value: " << real << ",  " <<"Degree: " << cosdeg[i]<<  endl;
        if (real == verify)    // Verifying True and function returning values from cos() function
            cout << "THIS Test is :" << i + 1 << " Pass  " << endl; // all values are same it will print pass
        else
            cout << "THIS Test is :" << i + 1 << " Fail  " << endl; // all values are same it will print pass
    }        
    return 0;
}