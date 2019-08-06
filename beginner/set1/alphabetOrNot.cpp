#include<iostream>
using namespace std;
char value;
int main(){
    cin>> value;
    if((int(value) >= 65 && int(value) <= 90)||(int(value) >= 97) && (int(value) <= 122)){
        cout<<"Alphabet";
    } else{
        cout<<"No";
    }
}