#include<iostream>
using namespace std;
int main(){
    int n,k;
    int a[100],b[100];
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    for(int i=0;i<n;i++){
        if(a[i] %2 != 0){
        //	cout<<a[i]<<"is odd";
            b[l] = a[i];
            l++;
        }
    }
    cout<<b[k-1];
}