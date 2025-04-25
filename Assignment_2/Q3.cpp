#include<iostream>
using namespace std;

//to check if a number is even or odd using switch case
int main()
{
    unsigned int num;
    cout<<"Enter a number: ";
    cin>>num;

    switch(num%2)
    {
        case 0:
            cout<<"The number is even"<<'\n';
            break;
        case 1:
            cout<<"The number is odd"<<'\n';
            break;
    }

    return 0;


}