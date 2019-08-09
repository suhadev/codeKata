#include<iostream>
using namespace std;
float num;
 int counter = 0;
void divideNum(float n){
	cout<<n<<endl;
      counter++;
    if(n <= 0){
        cout<<counter;
        return;
    }
    n = n/2;
 
    //cout<<"counter"<<counter<<endl;
    divideNum(n);
}
int main(){
    cin>>num;
    divideNum(num);
   

}