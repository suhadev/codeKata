#include<iostream>
using namespace std;
int num;
int main(){
    cin>>num;
    if(num > 0){
        cout<<"Positive";
    }
    else if(num < 0) {
        cout<<"Negative";
    } else {
        cout<<"Zero";
    }
}
