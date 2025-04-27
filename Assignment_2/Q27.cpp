#include<iostream>
using namespace std;

int main()
{
    int order;

    cout<<"Enter order of the square you want: ";
    cin>>order;


    for(int i =1;i<=order;i++)
    {
        int row_type, init_num =1;


        //to determine the type of row for the arrangement
        if(i<=(order/2) || i==((order+1)/2))
        {
            row_type = i;
        }
       else
       {
            if(order%2==0)
            {
                row_type = i - (2*(i-(order/2))-1);
            }
            else
            {
                row_type = ((order+1)/2)-(i-((order+1)/2));
            }
       }

       //making row-wise pattern
       int gap  = order  - (2*(row_type)) ; 
       for(int j = 1;j<=row_type;j++)
       {
            cout<<j<<" ";
       }
       for(int j = 0 ; j<= gap;j++)
       {
            cout<<row_type<<" ";
       }
       for(int j = (row_type-1);j>=1;j--)
       {
            cout<<j<<" ";
       }
    
    cout<<'\n';
    }
    return 0;
}