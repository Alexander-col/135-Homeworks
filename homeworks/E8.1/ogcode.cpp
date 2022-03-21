#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// e 8.1
// e 5.15
// e 5.14

int main()
{

    ofstream myFile;
    myFile.open("hello.txt");
    myFile << "Hello World ";
    myFile.close();
    // Now we will open the file again to assign into to a variable to then be printed out!

    string file_line;
    //The varaible string that will hold what's in the file has been created
    myFile.open("hell.txt", ios::in);//read

    if (myFile.is_open())
    {
        string file_line;
        while (getline(myFile, file_line))
        {
            cout << file_line << endl;
        }

    }
    cout << file_line;

}