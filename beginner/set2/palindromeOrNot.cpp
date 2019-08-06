#include<iostream>
#include<string>
using namespace std;
int num;
string reversedNum = "";
int main(){
    cin>>num;
    string st = to_string(num);
    int l = st.length();
    for(int i= l; i>=0;i--){
        reversedNum = reversedNum + st[i];
    }
    
    (reversedNum == st) ? cout<<"yes":cout<<"no";
}