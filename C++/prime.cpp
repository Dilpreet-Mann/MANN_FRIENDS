#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:)"<<endl;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    {
        cout<<"no. is not prime"<<endl;
    }
    else
    {
        cout<<"no. is prime"<<endl;
    }

    
}