#include <iostream>
using namespace std;
string positiveNumbers(int num)
{

    if (num > 0)
    {
        cout << "Positive";
        return "Positive";
    }
    else if (num < 0)
    {
        cout << "Negative";
        return "negative";
    } else{
        return "zero";
    }
}
int main()
{
    positiveNumbers(-5);
}