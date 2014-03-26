#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    if(n%i==0)
    return false;
    return true;
}

int main()
{
    int count=1;
    int num=2;
    while(count<10001)
    {
        num++;
        if(isPrime(num))
        count++;
    }
    cout<<num;
    return 0;
}
