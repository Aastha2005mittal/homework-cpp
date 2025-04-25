#include <iostream>
using namespace std;

int main(){
    // Multiply without * operator
    int a,b,ans=0;
    cout<<"Enter two Numbers : ";
    cin>>a>>b;

    // using loops
    for(int i=0; i<b; i++){
        ans+=a;
    }
    cout<<"The Answer is : "<<ans;

    return 0;
}
