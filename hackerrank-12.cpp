#include<iostream>
using namespace std;

int dif(int a[][100],int n)
{
    int c=0,b=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                c=c+a[i][j];
            }
            if(i==n-j-1)
            {
                b=b+a[i][j];
            }
        }
    }
    return abs(c-b);
}

int main()
{
    int a[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<dif(a,n);
    return 0;
}