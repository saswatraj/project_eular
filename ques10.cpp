#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N=2000000;
    bool arr[N];
    for(int i=0;i<N;i++)
    arr[i]=true;
    for(int i=2;i<sqrt(N);i++)
    {
        if(arr[i])
        for(int j=(i*i);j<N;j=j+i)
        arr[j]=false;
    }
    unsigned long long count=0;
    for(int i=2;i<N;i++)
    if(arr[i])
    count+=i;
    cout<<count;
    return 0;
}
