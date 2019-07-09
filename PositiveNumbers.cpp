#include <iostream>
using namespace std;

string main()
{
  int num;
    cin>>num;
    if (num > 0)
    {
        return "Positive";
    }
    else if (num < 0)
    {
        return "negative";
    } else{
        return "zero";
    }
}