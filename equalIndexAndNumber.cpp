#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n],b[n],temp[n];
    int counter = 0;
	
	
	cin>>n;
    for(int i=0;i<n;i++){
    	
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	
        if(a[i] == i){
            b[counter] = i;
            counter++;
        }
    }
    if(counter == 0){
    	cout<<"-1";
    }
    else{
    	for(int i=0;i<counter;i++){
        for(int j=i+1;j<counter;j++){
            if(b[i] > b[j]){
                temp[i] = a[j];
                b[j] = b[i];
                b[i] = temp[i];
            }
        }
    }
    for(int i=0; i<counter;i++){
        if(i == counter-1){
            cout<<b[i];
        }else{
            cout<<b[i]<<" ";
        }
        
    }
    }
    

}