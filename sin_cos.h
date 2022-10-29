/**
FILE:          		sin_cos.h
TITLE:         		File contains functions for Section 2 of Assignment 2
SUBMITTED BY:  		Parth Pandya (Student Id : 200468783)
FOR COURSE:    		CS 700
DATE OF CREATION:   12th October 2022
PURPOSE:			This program contains unit test cases of sin and cos function test
*/



/** These functions compute the sine and cosine of an angle
    expressed in degrees. The result will be
    an integer representing the sine or cosine as
    ten-thousandths. For example, a result of 7071 represents
    7071e-4 or 0.7071.
*/

int sin0to45(int);
int sin45to90(int);
int polyEval(int, int[], int);

/** Compute the sine of an angle in degrees.
    @param degree The angle in degrees
    @return The sine of degree
*/
int sin(int degree) {
  if (degree < 0) {
    degree = -degree;
  }
  degree = degree % 360;
  if (degree<= 45 && degree>=0) {
    return sin0to45(degree);
  }
  else if (degree>=45 && degree<= 90) {
    return sin45to90(degree);
  }
  else if (degree>= 90 && degree <= 180) {
    return sin(180 - degree);
  }
  else {
    return -sin(degree - 180);
  }
}

/** Compute the cosine of an angle in degrees.
    @param degree The angle in degrees
    @return The cosine of degree
*/
int cos(int degree) {
  return sin(degree + 90);
}

/** Compute the sine of an angle in degrees
    between 0 and 45.
    pre: 0 <= x < 45
    @param x The angle
    @return The sine of x
*/
int sin0to45(int x) {
  // Code to compute sin(x) for x between 0 and 45 degrees
  // Evaluate a polynomial optimized for this range.
  int coef[] = {
    -81, -277, 1747900, -1600};
  return polyEval(x, coef, 4) / 10000;
}

/** Compute the sine of an angle in degrees
    between 45 and 90.
    pre: 45 <= x <= 90
    @param x The angle
    @return The sine of x
*/
int sin45to90(int x) {
  // Code to compute sin(x) for x between 45 and 90 degrees
  // Evaluate a polynomial optimized for this range.
  int coef[] = {
    336, -161420, 75484, 999960000};
  return polyEval(90 - x, coef, 4) / 100000;
}

/** Function to evaluate a polynomial
    @param x The point at which the polynomial is to be evaulated
    @param coef The array of coefficients
    @param n The number of coefficients (degree + 1)
    @return x^n-1*coef[0] + x^n-2*coef[1] + ... x*coef[n-2] + coef[n-1]
*/
int polyEval(int x, int coef[], int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result *= x;
    result += coef[i];
  }
  return result;
}