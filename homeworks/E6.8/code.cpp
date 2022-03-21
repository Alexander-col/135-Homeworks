// ••E6.8 Writeafunction
// bool equals(int a[], int a_size, int b[], int b_size)
// that checks whether two arrays have the same elements in the same order.

/*
Author: Alexander Colotl 
Course: CSCI-135
Instructor: Tong Yi
Assignment: E 6.8
*/
#include <iostream>

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size != b_size)
    {
        return false;
    }
    for (int i = 0; i != a_size; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    std::cout << "Goodbye World" << std::endl;
    int arra[3] = {1,2,3};
    int arrb[3] = {1,2,3};
    std::cout << sizeof(arra)/sizeof(arra[0]) << std::endl;
    std::cout << equals(arra, 3, arrb, 3) << std::endl;

}