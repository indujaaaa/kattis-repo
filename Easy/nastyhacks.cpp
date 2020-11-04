#include <iostream>
#include <string.h>

int main()
{
    int n, r, e, c, diff;
    std::cin>>n;

    for(int i = 0; i < n; i++)
    {
        std::cin>>r>>e>>c;
        diff = (e - r) - c;
        if(diff > 0)
            std::cout<<"advertise"<<std::endl;
        else if(diff == 0)
            std::cout<<"does not matter"<<std::endl;
        else if(diff < 0)
            std::cout<<"do not advertise"<<std::endl;
    }
    
    return 0;
}
