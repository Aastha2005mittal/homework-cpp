#include <iostream>
using namespace std;

int main(){
    // Celcius to Fahrenheit
    float temp;
    cout<<"Enter Temperature in Celcius : ";
    cin>>temp;
    float temp_f = (9.0/5)*temp +32;
    cout<<"The Temperature in Fahrenheit is : "<<temp_f;
    return 0;
}
