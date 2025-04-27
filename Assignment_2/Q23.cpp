#include<iostream>
using namespace std;


//full pyramid number pattern
int main()
{
    for(int i = 1; i<=10; i++)
    {
        for(int l = (10-i) ; l>=1 ; l--)
        {
            cout<<" "<<" ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        for(int k = (i-1); k>=1; k--)
        {
            cout<<k<<" ";
        }
        cout<<'\n';
    }
}