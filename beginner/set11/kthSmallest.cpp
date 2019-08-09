#include<iostream>
#include<string>
#include<array>
#include<algorithm>
using namespace std;
int n,k;

int main(){
    cin>>n,k;
    int arr[k];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr,l);

}