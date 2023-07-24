#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no.:)"<<endl;
    cin>>n;
    float ans=0,digit=0;
      int i=0;
    while(n!=0)    
    {
        digit=n%10;
        ans=digit+ans*10;
        n=n/10;
        i++;
    }
    cout<<ans;
}