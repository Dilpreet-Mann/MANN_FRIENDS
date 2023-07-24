#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Enter the first side"<<endl;
    cin>>a;
    cout<<"Enter the second side"<<endl;
    cin>>b;
    cout<<"Lets find the area"<<endl;
    cout<<"Enter the number please :)"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Area of trinagle is :) "<<(a*b)/2<<endl;
        break;
    case 2:
        cout<<"Area of rectangle is :) "<<(a*b)<<endl;
        break;
    case 3:
        cout<<"Area of sqaure is "<<pow(a,2)<<endl;
        break;
    case 4:
        cout<<"Area of circle is :) "<<3.14*(pow(a,2))<<endl;
        break;
    case 5:
        exit;
    }
}
