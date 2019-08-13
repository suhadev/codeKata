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
  
    for(int i=0;i<s.size();i++){
    //cout<<"size"<<s.size();    
	//cout<<s[i];
	if(i == s.size() -1){
		cout<<s[i]<<"";
	} else{
		cout<<s[i]<<" ";
	}
   }
   cout<<"\n";
   for(int i=0;i<ss.size();i++){
	//cout<<ss[i];
	if(i == ss.size() - 1){
		cout<<ss[i]<<"";
	} else{
		cout<<ss[i]<<" ";
	}
   }
}