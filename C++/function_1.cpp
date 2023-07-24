#include<iostream>
using namespace std;
int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
            return ans;
}
int ncr(int n,int r)
{
    int num=factorial(n);
    int dem=factorial(r)*factorial(n-r);
     return num/dem;

}
int main()
{
    int a,b;
cout<<"Enter the number "<<endl;
cin>>a>>b;
int answer=ncr(a,b);
cout<<"Answer is : "<<" "<<answer<<endl;
}