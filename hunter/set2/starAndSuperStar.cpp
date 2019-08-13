#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sCounter = 0;
    int a[100];
    vector<int>s,ss;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //get star element
    for(int i=0;i<n;i++){
    	 sCounter =0;
         //cout<<"current el"<<a[i]<<"\n";
        for(int j=i+1;j<n;j++){
            if(a[i] < a[j]){
            	//cout<<a[i]<<"<"<<a[j]<<"\n";
                sCounter++;
            }
        }
        if(sCounter == 0){
           //cout<<"star el "<<a[i]<<"\n";
           s.push_back(a[i]);
        }
    	
   // }
    //for(int i=0;i<n;i++){
    	//cout<<a[i];
    	int ssCounter = 0;
    	for(int j=i-1;j>=0;j--){
    		if(a[i]<a[j]){
    			//cout<<a[i]<<"<"<<a[j]<<"\n";
    			ssCounter++;
    		}
    	}
    	if(sCounter == 0 && ssCounter ==0){
    		
        	//cout<<"super start el "<<a[i];
        	ss.push_back(a[i]);
        }
    }
  //  vector <int>::iterator it;
   //for(it=s.begin();it<s.end();it++){
   //	cout<<*it;
   //}
   
   for(auto k:s){
   	cout<<k<<" ";
   }
   cout<<"\n";
   for(auto k:ss){
   	cout<<k<<" ";
   }
}