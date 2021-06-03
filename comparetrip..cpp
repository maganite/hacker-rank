// COMPARE THE TRIPLETS

#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3];
    int al=0,bob=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";

    for(int j=0;j<3;j++)
    {
        cin>>b[j];
    }

    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            al=al+1;
        }
        else if(b[i]>a[i])
        {
            bob=bob+1;
        }
        else
        {
            continue;
        }
    }
    cout<<al<<" "<<bob;
    return 0;
}
