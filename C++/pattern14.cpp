            #include<iostream>
using namespace std;
int main()
{
    int num,row=1;
    int count=1;
    cout<<"Enter the number "<<endl;
    cin>>num;
    while(row<=num)
    {
        int space=num-row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}