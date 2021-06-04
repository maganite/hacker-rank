//functions

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int a[4],b=INT_MIN;;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
        else{
            continue;
        }
    }
    cout<<b;
    return 0;

}