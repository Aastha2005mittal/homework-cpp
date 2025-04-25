#include <iostream>
using namespace std;

int main(){
    // Fahrenheit to Kelvin
    float temp;
    cout<<"Enter Temperature in Fahrenheit : ";
    cin>>temp;
    float temp_k = (temp-32)*(5.0/9) +273.15 ;
    cout<<"The Temperature in Kelvin is : "<<temp_k;
    return 0;
}
