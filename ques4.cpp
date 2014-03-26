#include<iostream>
#include<vector>
using namespace std;

bool isPalin(int n)
{
    int temp=n;
    vector<int> digits;
    while(temp>0)
    {
        digits.push_back(temp%10);
        temp=temp/10;
    }
    int mid=digits.size()/2;
    for(int i=0;i<=mid;i++)
    if(digits[i]!=digits[digits.size()-i-1])
    return false;
    return true;
}

int main()
{
    int maxP=-1;
    for(int i=100;i<1000;i++)
    for(int j=100;j<1000;j++)
    {
        int temp=i*j;
        if(isPalin(temp)&&(temp>maxP))
        maxP=temp;
    }
    cout<<"Ans="<<maxP;
    return 0;
}
