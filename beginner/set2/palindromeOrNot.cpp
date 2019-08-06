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
        cout<<reversedNum<<endl;
    }
    cout<<"reversedNujm"<<reversedNum<<endl;
    cout<<st;
    cout<< (reversedNum == st);
    (reversedNum == st) ? cout<<"p":cout<<"np";
}