#include<iostream>
using namespace std;
bool primeno(int n)
{
    bool a=0;
    for(int i=2;i<n;i++)
    {

        if(n%i==0){
            a=1;
            break;
        }
            
        }
        if(a==1){
            cout<<"No.is not prime ";
        }
        else{
            cout<<"No. is prime";
        }
    }
int main()
{
    int n;
cout<<"Enter the number ";
cin>>n;
primeno(n);
}