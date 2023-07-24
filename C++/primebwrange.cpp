#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number:)"<<endl;
    cin>>n>>m;
    int ans=0;
    int num=n+1;
    for(;num<m;num++){
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            ans=ans+1;
            break;
        }
        
    }
    }
        cout<<"value is "<<(m-(n+1))-ans<<endl; 
}