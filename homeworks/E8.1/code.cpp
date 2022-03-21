/*
Author: Alexander Colotl 
Course: CSCI-135
Instructor: Tong Yi
Assignment: E 8.1 
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outFile;
	outFile.open("hello.txt", ios::out);
	outFile << "Hello, World!";
	outFile.close();
    
    //The first part of the part has been completed 

	ifstream inFile;

	inFile.open("hello.txt", ios::in);
	string output = "";
	char c = ' ';
	while (inFile.get(c))
    {
		output = output + c;
    }
	cout << output << endl;
	return 0;
}