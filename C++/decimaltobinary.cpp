#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=ans+bit*10;
        n>>1;
    }
    cout<<ans;
}
