#include <iostream>
using namespace std;

int main(){
    // Celcius to Kelvin
    float temp;
    cout<<"Enter Temperature in Celcius : ";
    cin>>temp;
    float temp_k = temp +273.15;
    cout<<"The Temperature in Kelvin is : "<<temp_k;
    return 0;
}
