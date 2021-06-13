// /A Very Big Sum

#include<iostream>
using namespace std;
int main()
{
    long sum=0;
    int n;
    long a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}