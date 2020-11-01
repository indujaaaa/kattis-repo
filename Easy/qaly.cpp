#include <iostream>
using namespace std;

int main()
{
    int n;
    long double qaly = 0.0;
    cin>>n;
    
    for(int i = 1; i <= n; i++)
    {
        long double q, y;
        cin>>q>>y;
        qaly += (q * y);
    }
    
    cout<<qaly;
    
    return 0;
}
