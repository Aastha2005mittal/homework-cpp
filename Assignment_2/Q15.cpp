#include<iostream>
#include<cmath>
using namespace std;


//to check if the number is armstrong number
int main()
{
    int num,check=0,init_num;
    cout<<"Enter a number: ";
    cin>>num;

    init_num = num;    
    int base = 1;

    while ((num/base) !=0)
    {
        int increment =  (num - ((num/(base*10)*(base*10))))/((base*10)/10);
        
        
        
        num = num - (num - ((num/base)*base));
  

        check+= (increment*increment*increment);

        cout<<check<<" "<<num<<'\n';
        base *= 10;
    }

    /*
    More efficient version -:
        while (num>0)
        {
            int digit = num%10;
            check += digit *digit*digit;
            num /=10;
        }
    
    */

    
    if(check==init_num)
    {
        cout<<"The given number is an angstrom number";
    }    
    else
    {
        cout<<"The given number is not an angstrom number";
    }


    return 0;
}