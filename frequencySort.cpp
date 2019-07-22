#include<iostream>
using namespace std;

int main(){
  int number;
cin>>number;
int arr[10];
int a[10][10];
int temp,temp1;
int counter = 1;
int k=0;
int fCounter = 0;
    for(int i=0; i<number;i++){
       cin>>arr[i];
       cout<<arr[i]<<endl;
    }
    //sort the array

    for(int i=0;i<number;i++){
      for(int j=i+1;j<number;j++){
        if(arr[i] > arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;

        }
      }
    }

    for(int i=0; i<number;i++){
       
       cout<<arr[i];
    }

    for(int i=0;i<number;i++){
        counter = 1;
        for(int j=i+1;j<number;j++){
            if(arr[i] == arr[j]){
              cout<<arr[i]<<" is repeating"<<endl;
              counter ++;
              i++;
              
            }
            
        }
        fCounter += counter;
        // if(fCounter >= number){
        //   break;
        // }
        if(counter > 1){
          k++;
        }
          cout<<"Assigning value"<< arr[i]<<" to"<<i<<'0'<<endl;
         cout<<"counter"<<counter<<endl;
         a[k][0] = arr[i];
         a[k][1] = counter;
        
        cout<<i<<"after Assigning"<<endl;
         
    }

//printing 2d array
    for(int i=0;i<=k;i++){
        for(int j=0;j<=1;j++){
            cout<<a[i][j];
        }
    }

    //sorint  2d array

    for(int i=0;i<k;i++){
      for(int j=i+1;j<=k;j++){
        cout<<"i"<<i<<j;
        if(a[i][1] < a[j][1]){
           cout<<"counter is greater"<<endl;
            temp = a[i][1];
            a[i][1] = a[j][1];
            a[j][1] = temp;
            temp1 = a[i][0];
            a[i][0] = a[j][0];
            a[j][0] = temp1;
            //cout<<"k value is"<<k;
        }
        if(a[i][1] == a[j][1]){
          cout<<"counter is same,checking if element is greater"<<endl;
          if(a[i][0] > a[j][0]){
            cout<<"element is greater so swapping";
            temp = a[i][1];
            cout<<"temp"<<temp;
            a[i][1] = a[j][1];
            a[j][1] = temp;
            temp1 = a[i][0];
            a[i][0] = a[j][0];
            a[j][0] = temp1;
            //cout<<"k value is"<<k;
        }
        }
      }
    }
//printing 2d array
    // for(int i=0;i<=k;i++){
    //     for(int j=0;j<=1;j++){
    //         cout<<a[i][j];
    //     }
    // }

    //printing 2d array
    for(int i=0;i<=k;i++){
        for(int j=0;j< a[i][1];j++){
            cout<<a[i][0];
        }
    }

    //print the result
    
}