#include<iostream>
#include<string>
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

    cout<<'\n';

    for(int i=1; i<=10; i++)
    {
        
        cout<<string(2*(10-i),' ')<<" ";

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