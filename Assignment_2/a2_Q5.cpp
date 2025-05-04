#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    int ans=1;

    if(a==0){cout<<"Greatest common divisor is : "<<b;}
    else if(b==0){cout<<"Greatest common divisor is : "<<a;}
    else if(a==b){cout<<"Greatest common divisor is : "<<a;}

    else{
    for(int i=1; i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans*=i;
        }
    }
    cout<<"The Greatest common divisor is : "<<ans;
}
    return 0;
}
