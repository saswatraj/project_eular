#include<iostream>
#define LIMIT 100
using namespace std;
typedef unsigned long long ULL;

int main()
{
    ULL ans=0;
    for(int i=1;i<=LIMIT;i++)
    for(int j=i+1;j<=LIMIT;j++)
    ans+=i*j;
    cout<<"Ans="<<(2*ans)<<endl;
    return 0;
}
