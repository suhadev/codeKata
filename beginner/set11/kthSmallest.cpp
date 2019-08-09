#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int n,k;

int main(){
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for(int i=0;i<n;i++){
      //  cout<<arr[i];
    //}
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+l);
    //for(int i=0;i<n;i++){
      //  cout<<arr[i];
    //}
    cout<<arr[k -1];
}