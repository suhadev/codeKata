#include<iostream>
using namespace std;
int n;
int sum = 0;
int main(){
    cin>> n;
    for(int i = 1;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum;
}