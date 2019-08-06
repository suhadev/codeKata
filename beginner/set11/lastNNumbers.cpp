#include<iostream>
#include<string>
using namespace std;
int main(){
    string S;
    int N;
    cin>>S>>N;
    for(int i = S.length() - N;i<S.length();i++){
        cout<<S[i];
    }
}