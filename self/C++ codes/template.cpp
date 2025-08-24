#include <iostream>
using namespace std;
template <typename T>
T square(T x)
{
    return x*x;
}

template <typename U>
U cube(U x)
{
    return x*x*x;
}

int main()
{
    cout<<square<int>(5)<<endl;
    cout<<square<float>(2.2)<<endl;
    cout<<cube<int>(5)<<endl;
    cout<<cube<float>(2.2)<<endl;
    
}