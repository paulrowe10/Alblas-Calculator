// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/**
* Name: Paul Rowe
* Program Name: C++ Calculator
* Date: 9/12/24
* Extra:
*/


#include <iostream>
using namespace std;

int main()
{
    float num1;
    float num2;
    float add;
    float sub;
    float multi;
    float div;
    int mod;
    float incr;
    float decr;
    bool again = true;
    string na = "";
    //declaring variables
    while (again) {
    cout << "Enter an integer: ";
    cin >> num1;
    cout << "Enter another integer: ";
    cin >> num2;
    //asking user for input
    add = num1 + num2;
    cout << add << endl;
    sub = num1 - num2;
    cout << sub << endl;
    multi = num1 * num2;
    cout << multi << endl;
    div = num1 / num2;
    cout << div << endl;
    mod = int(num1) % int(num2);
    cout << mod << endl;
    incr = ++num1;
    cout << incr << endl;
    decr = --num2;
    cout << decr << endl;
    cout << "Run again? y/n \n";
    cin >> na;

    if (na=="y") {
        again = true;
    }
    else {
        again = false;
    }

}
    //calculations
}

