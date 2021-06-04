//Basic pointers

#include<iostream>
using namespace std;

void update(int *a,int *b)
    {
        int a1=*a+*b;
        int b1=abs(*a-*b);
    }

int main()
    {
    int a,b;
    int *pa = &a,*pb = &b;
    cin>>a;
    cin>>b;
    update(pa,pb);
    cout<<a+b<<endl;
    cout<<abs(a-b);

    return 0;
}