#include<iostream>
using namespace std;
int num;
int main(){
    cin>> num;
    (num < 0) ? cout<<"invalid" : (num %2 == 0) ? cout<<"Even" : cout<<"Odd";
}