#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100000],b[100000],temp[100000];
    int counter =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	//cout<<"outerloop";
        for(int j=i+1;j<n;j++){
        //	cout<<"inner loop"<<endl;
        //	cout<<a[i]<<a[j]<<endl;
            if(a[i]<a[j]){
          //  	cout<<a[i]<<" less than "<<a[j]<<endl;
            //	cout<<"i:"<<i<<"j:"<<j;
                temp[i] = a[j];
                a[j] = a[i];
                a[i] = temp[i];
              //  cout<<"swapped value"<<a[i]<<"at"<<i<<a[j]<<endl;
            }
        }
    }
   
    for(int i=0;i<n;i++){
    	if(a[i]==0){
            counter ++;
        }
    }
    
    	if(counter == n){
    		cout<<0;
    	
    	} else{
    		for(int i=0;i<n;i++){
    			cout<<a[i];
    		}
    		//cout<<i;
        
    	}
    	
    
}