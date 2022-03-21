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