#include<iostream>
using namespace std;
int main()
{
    int num=0,n,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(num<n)
    {
        sum=sum+num;
        num=num+2;
    }
    cout<<sum;
}