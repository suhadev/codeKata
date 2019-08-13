#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l = s.length();
    int p =1;
    while(l!=1){
        p*=l;
    }
    cout<<p;
    
}