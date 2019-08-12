#include<iostream>
using namespace std;
int temp;
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<5;j++){
			if(a[i] > a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
				
			}
		}
	}
cout<<a[n-k];
}