#include<iostream>
using namespace std;
int arr[3];
int main(){
    for(int i = 0;i <3;i++){
        cin>>arr[i];
    }
    int largestNumber = arr[0];
    for(int i=0;i<3;i++){
        if(arr[i] > largestNumber){
            largestNumber = arr[i];
        }
    }
    cout<<largestNumber;
}