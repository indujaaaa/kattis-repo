#include <iostream>
#include <string.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int index = 1, cups[3] = {1, 0, 0};
    char str[50]; 
    std::cin>>str;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'A')
            swap(cups[0], cups[1]);
        else if(str[i] == 'B')
            swap(cups[1], cups[2]);
        else if(str[i] == 'C')
            swap(cups[0], cups[2]);
    }

    for(int i = 0; i < 3; i++)
    {
        if(cups[i] == 1)
            index = i + 1;
    }
    
    std::cout<<index;
    
    return 0;
}
