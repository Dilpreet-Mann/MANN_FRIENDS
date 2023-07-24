#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<" The number a is positive "<<endl;
    }
    else if(a<0)
    {
        cout<<"The number a is neagative "<<endl;
    }
    else
    {
        cout<<"The number is zero"<<endl;
    }
}