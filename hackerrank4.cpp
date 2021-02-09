//For Loop

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=9 ; i++){
        if(i==n){
            cout<<"n";
            break;
        }
        else{
            cout<<"dont know";
            cout<<endl;
            break;
        }
    }
    if(n>9){
        if(n%2==0){
            cout<<"nine"<<endl;
            cout<<"even";
        }
        else {
            cout<<"nine"<<endl;
            cout<<"odd";
        }
    }
}    