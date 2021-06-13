//Mini-Max Sum

#include<iostream>
using namespace std;
int main()
{
    long a[5],mins=0,maxs=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)               //sorted array
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    
    for(int i=0;i<4;i++)
    {
        mins=mins+a[i];
    }
    for(int i=1;i<5;i++)
    {
        maxs=maxs+a[i];
    }
    cout<<mins<<" "<<maxs;
    return 0;
}