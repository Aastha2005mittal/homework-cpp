
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Prime or not 
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n<=1){
        cout<<"Not a prime number.";
    }
    else{
    bool isprime=true;

        for(int i=2; i<=sqrt(n); i++){
            
            if(n%i==0){
                isprime=false;
                break; 
            }
            else{
                isprime=true;
                break;
            }
        }
    
        if(isprime==true){
            cout<<"Prime number";
        }
        else{
            cout<<"Not a prime number";
        }

    }
    return 0;
}