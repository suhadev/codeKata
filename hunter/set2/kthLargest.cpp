#include<iostream>
using namespace std;
int temp;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		//int el = arr[i];
		//cout<<"ele"<<a[i]<<endl;
		for(int j=i+1;j<5;j++){
			if(a[i] > a[j]){
				//cout<<a[i]<<" greater than "<<a[j]<<endl;
				//cout<<"moving"<<a[i]<<"from"<<i<<"to"<<j<<endl;
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
				
			}
		}
	}
		cout<<a[n-k];
}