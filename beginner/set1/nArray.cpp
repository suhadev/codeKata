#include<iostream>
using namespace std;
int N,K,sum=0;
int main(){
    cin>>N;
    cin>>K;
    int arr[N];
    for(int i=0;i<K;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<K;i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}