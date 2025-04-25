#include<iostream>
using namespace std;

//printing fabonacci series
int main()
{
    long long  term1,term2,next,n;

    cout<<"Enter number of terms you want for the series: ";
    cin>>n;

    term1 = 0;
    term2 = 1;

    cout<<term1<<" "<<term2<<" ";

    for(int i = 1; i<=(n-2);i++)
    {
        next = term1+term2;
        cout<<next<<" ";
       
        term1 = term2;
        term2 = next;
    
        
    }

    return 0;
}