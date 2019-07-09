// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//     	for(int j=i+1;j<n;j++){
//     		if(a[i] == a[j]){
//     			cout<<a[i]<<" ";
//     		}
//     	}
//     }   
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    int elementPresent = 0;
    int counter =0;
    int elementNotPresentCounter =0;
    int secondCounter =0;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	int element;
    	element = a[i];
    	//cout<<"element in a "<<element<<endl;
    	elementPresent = 0;
    	for(int j=0;j<n;j++){
    		
    		//cout<<"looping in b of i"<<i<<"is "<<b[j]<<endl;
    		if(element == b[j]){
    			elementPresent++;
    		}
    	}
    	if(!elementPresent){
    		//cout<<"elementNotPresentCounter: "<<elementNotPresentCounter;
    		b[elementNotPresentCounter] = element;
    		
    		//cout<<"s"<<element<<"i"<<elementNotPresentCounter<<endl;
    		elementNotPresentCounter++;
    	}
    	else{
    		//cout<<"element already present"<<endl;
    		for(int i=0;i<n;i++){
    			
    			if(c[i]==element){
    				secondCounter++;
    				
    			}
    			
    		
    		}
    		if(secondCounter == 0){
    			//cout<<"counter "<<counter <<element<<endl;
    			c[counter] = element;
    		counter++;
    		}
    	}
    }
    //cout<<"counter:"<<counter;
    //int s=sizeof(c)/sizeof(c[0]);
    sort(c,c+counter);
    for(int i=0;i<counter;++i){
    	cout<<c[i]<<" ";
    }
    
}