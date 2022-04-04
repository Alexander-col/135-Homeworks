/*
Author: Alexander Colotl 
Course: CSCI-135
Instructor: Tong Yi
Assignment: E 8.1 
*/
#include <iostream>

std::string pyramid (std::string strr)
{
    std::string output = "";
    std::string phaser = ""; // The phaser is a key word that adds to string while being on a single line
    int len = strr.length(); // Have to fix the output becuase of the thing tha make it appear only once 
    
    for (int i = 0; i != len; i++)
    {
        phaser += strr[i];
        output = output + phaser;
        output += "\n";
    }
    for (int i = len-1; i != 0; i--)
    {

        output = output + strr.substr(0,i);
        output += "\n";
    }



    return output;
}

int main()
{
    std::cout << pyramid("Mihi cura futuri") << std::endl;
    std::cout << pyramid("hello") << std::endl;
    std::cout << pyramid("pyramid") << std::endl;
    std::cout << pyramid("hunter") << std::endl;
    std::cout << pyramid("computer") << std::endl;
    std::cout << pyramid("science") << std::endl;
    std::cout << pyramid("dana") << std::endl;
    std::cout << pyramid("milkshake") << std::endl;
    std::string input = "";
    std::cin >> input;
    std::cout << pyramid(input) << std::endl;
    return 0;
}