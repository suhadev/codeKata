#include<iostream>
using namespace std;
int year;
int main(){
    cout<<(year % 4 == 0);
    (year % 4 == 0)? cout<<(year%100 == 0)?(year%400 == 0) ?cout<<"yes":cout<<"no":cout<<"no":cout<<"no";
}