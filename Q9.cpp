#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    n+=40;
    n/=5;
    n%=2;
    n*=10;

    cout<<"The answer is : "<<n;
    return 0;
}