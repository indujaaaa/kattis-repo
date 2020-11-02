#include <iostream>
using namespace std;

int max(int a, int b)
{
    return ((a > b)? a : b);    
}

int main()
{
    int n, h, v;
    cin>>n>>h>>v;
    
    int topLeft = 4 * h * v;
    int topRight = 4 * h * (n - v);
    int bottomLeft = 4 * (n - h) * v;
    int bottomRight = 4 * (n - h) * (n - v);
    
    int Max = max(max(max(topLeft, topRight), bottomLeft), bottomRight);
    cout<<Max;
    
    return 0;
}
