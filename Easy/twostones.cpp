#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    
    /* No matter how many stones, 
    there will be only either one stone or no stone left at the end. 
    Two or more stones on the ground means that they are consecutive
    and hence one player will have to take them off the ground
    until there is one/no stone left. 
    
    Thus, if the number of stones are even, Bob will win as all stones will be taken
    If number stones are odd, then Alice wins as 1 is an odd number.*/
    
    if( n % 2 != 0)
        cout<<"Alice";
    else
        cout<<"Bob";

    return 0;
}
