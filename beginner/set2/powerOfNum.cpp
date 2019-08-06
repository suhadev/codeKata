#include<iostream>
using namespace std;
int b,p,value = 1;
int main(){
    cin>>b>>p;
    while(p){
        value*=b;
        p--;
    }
    cout<<value;
}