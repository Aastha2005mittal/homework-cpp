#include <iostream>
using namespace std;

//displaying the next four characters for a given character

int main()
{
    char user_char;

    cout<<"Enter a character you desire: ";
    cin>>user_char;
    
    for(int i= 1; i<=4 ; i++)
    {
        char next_char = user_char +i;
        cout<<next_char<<" ";   
    }

    return 0;
}
