//plus minus

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,a[100];
    float p=0,ne=0,z=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            p=p+1;
        }
        else if(a[i]<0)
        {
            ne=ne+1;
        }
        else
        z=z+1;
    }
    std::cout<<std::fixed<<std::setprecision(6)<<p/n<<endl;
    std::cout<<std::fixed<<std::setprecision(6)<<ne/n<<endl;
    std::cout<<std::fixed<<std::setprecision(6)<<z/n;
    return 0;
}