#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<endl;

    // Before swapping 
    cout<<"Before Swapping -> "<<endl;
    cout<<"First number : "<<a <<endl;
    cout<<"Second number : "<<b;
    cout<<endl<<endl;

    // swapping logic;
    a=a+b;
    b=a-b;
    a=a-b;

    // After swapping 
    cout<<"After Swapping -> "<<endl;
    cout<<"First number : "<<a <<endl;
    cout<<"Second number : "<<b;

    return 0;
}
