#include<iostream>
using namespace std;

typedef unsigned long long ULL;

ULL gcd(ULL x,ULL y)
{
    if(y==0)
    return x;
    else
    return gcd(y,x%y);
}

ULL lcm(ULL x,ULL y)
{
    return (x*y)/gcd(x,y);
}


int main()
{
    ULL tlcm=1;
    for(int i=1;i<=20;i++)
    tlcm=lcm(tlcm,i);
    cout<<"Ans="<<tlcm<<endl;
    return 0;
}

