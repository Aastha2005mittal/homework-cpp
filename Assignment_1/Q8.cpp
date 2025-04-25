#include<iostream>
using namespace std;

int main()
{
    /*
    All premitive data types-:
    INTEGER DATA TYPES
     1. int 
     2. short 
     3. long
     4. long long
     5. unsigned int ,unsigned short etc.

    CHARACTER DATATYPES
     1. char
     2. signed char
     3. wchar_t
    
    BOOLEAN DATATYPE

    FLOATING POINT DATATYPE
     1.float
     2.double
     3.long double
    */

    cout<<"Size of integer datatypes in bytes-:"<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(unsigned long)<<endl;

    cout<<"Size of character datatypes in bytes-:"<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(signed char)<<endl;
    cout<<sizeof(wchar_t)<<endl;

    cout<<"Size of boolean datatypes in bytes-:"<<endl;
    cout<<sizeof(bool)<<endl;
    
    cout<<"Size of floating datatypes in bytes-:"<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long double)<<endl;
    



    return 0;
}