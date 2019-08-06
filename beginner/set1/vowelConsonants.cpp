#include<iostream>
using namespace std;
char arr[5] = {'a', 'e', 'i','o','u'};
char value;
bool flag = false;
int main(){
    cin>> value;
    cout<<int(value);
    if(int(value) < 65 || int(value) > 90 || int(value) < 96 || int(value) > 123){
            cout<<"invalid";
            return 0;
        }
    for(int i=0;i<4;i++){
        
        if (arr[i] = value){
            flag = true;
        }
    }
    flag ? cout<<"Vowel":cout<<"Consonant";
}