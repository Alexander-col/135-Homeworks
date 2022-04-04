// Lab Quiz 06 - Rectangle: print 6 rows 5 columns* shape, each line is "* * *", the last * is not followed by space
#include <iostream>

int main()
{
    std::string output = "";
    int row = 6;
    int collums = 5;
    for (int i = 0; i != row; i++)
    {
        for (int j = 0; j != collums; j++)
        {
            output += "* ";
        }

        if(i == 5)
        {
            break;
        }
        output += "\n";
    }
    std::cout << output << std::endl;

    return 0; 
}