/* ONLY WRITE THE ANSWER TO THE QUESTIONS IN THE CORRESPONDING METHODS */

#ifndef LABFILE_HPP
#define LABFILE_HPP

#include <iostream>

using namespace std;

double fahrenheitToKelvin(double fahrenheit) {
    double kelvin;
    kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

    return kelvin;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
   
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int sumOfPrimes(int limit) {

    int n, sum = 0;
    for (n = 2; n <= limit; n++) 
    {
        if (isPrime(n) == true)
            sum = sum + n;
    }
    return sum;
}

int reverseInteger(int num) {
    return 0;
}

void printInvertedHalfStarPyramid(int rows) {

}


#endif
