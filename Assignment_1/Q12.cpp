#include <iostream>
using namespace std;

// program to menuplate a number
int main()
{
    int num; 

    cout<<"Enter a number: ";
    cin>>num;

    num+=40;
    num/=5.0;
    num%=2; //modulud does not work on float
    num*=10;

    cout<<"The new number after the menuplations is: "<< num;
    return 0;
}