
#include <iostream>
// Lab Quzz 03 - Greater of X or Y: Enter two integers x and y, print out the VALUE of the bigger number.
// Author: Alexander Colotl 
// Assignment: lab quix 03
// This was all edited on Visual Code Studio on mac

int main()
{
    int x,y;
    // It will ask for an input for the value of x
    std::cin >> x;

    // It will now ask to give the valye of y

    std::cin >> y; 

    if (x > y)
    {
        std::cout << x << std::endl; 
    }
    else
    {
        std::cout << y << std::endl;
    }


    return 0; 
}