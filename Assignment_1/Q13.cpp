#include <iostream>
using namespace std;

int main(){
    int sp, cp; // cp -> cost price
    cout<<"Enter the Cost Price : ";
    cin>>cp;
    cout<<"Enter the Selling Price : ";
    cin>>sp;
    int result=(sp-cp);
    if(result > 0){
        cout<<"You Got Profit of "<<result;
    }
    else if(result==0){
        cout<<"No Profit no loss";
    }
    else{
        cout<<"You Got Loss of "<<result;
    }
    return 0;
}
