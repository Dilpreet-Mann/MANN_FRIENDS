#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n-i)
        {
            cout<<j+1;
            j=j+1;
        }
        int start=i-1;
        int k=0;
        while(k<=start)
        {
            cout<<"*";
            k=k+1;
        }
        int l=0;
        while(l<=start)
        {
            cout<<"*";
            l=l+1;
        }
        int a=0;
        while(a<n-i)
        {
            cout<<n-a-i;
            a=a+1;
        }
        cout<<endl;
        i=i+1;
    }
}