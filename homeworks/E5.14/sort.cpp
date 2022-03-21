/*
Author: Alexander Colotl 
Course: CSCI-135
Instructor: Tong Yi
Assignment: E 8.1 

Write a function void sort 2(int& a, int& b) that swaps the values of a and b if a is a greater than b 
and otherwise leaves them alone if they are not 
*/
#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
    else
    {
        a = a;
        b = b;
    }

}


int main()
{
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
    cout << "u = " << u << endl;
    cout << "v = " << v << endl;
    cout << "w = " << w << endl;
    cout << "x = " << x << endl;
    sort2(u,v);
    sort2(w,x);
    cout << "u = " << u << endl;
    cout << "v = " << v << endl;
    cout << "w = " << w << endl;
    cout << "x = " << x << endl;
    sort2(u,v);
    return 0;
}