/*
Author: Alexander Colotl 
Course: CSCI-135
Instructor: Tong Yi
Assignment: E 5.15
In this probalm we called upon a previous created code so that it can sort 3 diffrent integers!
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

void sort3(int& a, int& b, int& c)
{
    sort2(c,b);
    sort2(b,a);
    sort2(c,a);
    sort2(c,b);

    sort2(a b); 
    sort2(b,c); 
    sort2(a,c); 
    sort2(a,b);
}

int main()
{
    cout << "where is the sauce" << endl;
    int a = 1;
    int b = 3;
    int c = 5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    sort3(a,b,c);
    cout << "NOW THE FUNCTION HAS BEEN CALLED AND THIS THE CHANGED CODE!\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;





    return 0;
}