//sum of dice

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of dots on upper face";
    cin>>n;
    int t;
    t=7-n;
    int sum=0;
    for(int i=1;i<=6;i++)
    {
        if(i==t)
        {
            continue;
        }
        else
        {
            sum=sum+i;
        }

    }
    cout<<"sum of all sides is"<<sum;
    return 0;
}
