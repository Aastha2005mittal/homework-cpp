#include<iostream>
#include<string>
using namespace std;


//full pyramid number pattern
int main()
{
    int query;

    cout<<"Enter number of rows you want: ";
    cin>>query;

    for(int i = 1; i<=query; i++)
    {
        for(int l = (query-i) ; l>=1 ; l--)
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

    cout<<'\n';

    for(int i=1; i<=query; i++)
    {
        
        cout<<string(2*(query-i),' ')<<" ";

        int increment = 1,num =1;
        while(increment<=((2*i)-1))
        {
            if(num<=i)
            {
                cout<<num<<" ";
                num += 1;

            }
            else
            {
                cout<<(num-(2*(num-i)))<<" ";
                num +=1;
            }
            increment +=1;
        }
        cout<<'\n';
    }
}