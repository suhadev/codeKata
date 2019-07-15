#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int counter = 0;
    int d[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int diff =0;
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                counter ++;
                break;
            }
            diff++;
        }
        cout<<diff<<endl;
        d[i] = diff;
    }
    for(int i=0;i<n;i++){
        cout<<d[i];
    }
    if(counter == 0){
        cout<<"unique";
    }
}