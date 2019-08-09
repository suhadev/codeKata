#include<iostream>
#include<string>
//#include<locale>
using namespace std;
string s;
int main(){
    getline(cin,s);
    locale loc;
    int l =s.length();
    for(int i=0;i<l-1;i++){
    	//cout<<s[i]<<endl;
        if(i == 0){
            if(s[i] >=97 && s[i] <= 122){
            	//cout<<"letter is lower case"<<endl;
                s[i] = s[i] - 32;
               // cout<<s[i]<<endl;
            }
            continue;
        }
        if(s[i] == ' '){
            i++;
            if(s[i] >=97 && s[i] <= 122){
                s[i] = s[i] - 32;
                //cout<<s[i]<<endl;
            }
        }
         else {
             if(s[i] >=65 && s[i] <= 90){
            	//cout<<"letter is upper case"<<endl;
                s[i] = s[i] + 32;
                //cout<<s[i]<<endl;
            }
         }
    }
    cout<<s;
}