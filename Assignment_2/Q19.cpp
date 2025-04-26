#include<iostream>
using namespace std;

//pyramid pattern with spaces
int main()
{
    int query,n;
    cout<<"Enter number of rows you want in the pyramid: ";
    cin>>query;
    
    n = 2*query;

    for(int i = 1;i<=n;i+=2)
    {
        for(int k = n-i; k>=1;k--)
        {
            cout<<" ";
        }
        for(int j = 1 ; j<=i;j++)
        {
            if(j==1 || j== i)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}