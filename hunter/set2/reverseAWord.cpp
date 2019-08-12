#include<iostream>
#include<string>
using namespace std;
string str;
string reversedString="";
bool lastWord = false;

string reverse(string s){
	string currentStr = s;
	//cout<<"length"<<currentStr.length()<<endl;
    int pos = currentStr.find(' ');
    //cout<<pos<<endl;
    if(pos == -1){
    	//cout<<"position is -1"<<endl;
    	if(currentStr.length() == 0){
    		//cout<<"no string is present"<<endl;
    		cout<<reversedString<<endl;
    	return reversedString;
    	}
    	//cout<<"firstchar"<<currentStr[0]<<endl;
    	lastWord = true;
    	pos = 0;
    }
    
     int in = (pos == 0) ? currentStr.length() - 1 : pos-1;
     //cout<<in<<endl;
    for(int i= in;i>=0;i--){
        reversedString += currentStr[i];
        
    }
    reversedString = (lastWord) ? reversedString : reversedString+" ";
    //cout<<reversedString<<endl;
    //cout<<"for loop ended"<<endl;
    currentStr = (lastWord) ? "" :s.erase(0,pos+1);
    //cout<<currentStr<<endl;
    reverse(currentStr);
}
int main(){
    getline(cin,str);
    reverse(str);
}
