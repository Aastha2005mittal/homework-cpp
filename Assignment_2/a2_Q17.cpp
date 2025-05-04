// checking of a plindrome using do while loop

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num ;

    cout << "Enter a number: ";
    cin >> num;

    // bool  isPalindrome =true;
    // int temp =num;
    int reversed =0;
    int original = num;
    do{
    int remainder = num%10;
   reversed = reversed*10 + remainder;
   num/=10;
    }while(num!=0);

    if(reversed==original){
        cout<<"It is a palindrome number.";
    }
    else{
        
        cout<<"It is not a palindrome number.";
    }

    return 0;
}
