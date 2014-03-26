#include<iostream>
#include<cmath>
using namespace std;

bool condS(int a,int b,int c)
{
    if((a+b+c)!=1000)
    return false;
    if(((a*a)+(b*b))!=(c*c))
    return false;
    return true;
}

int main()
{
    int A,B;
    int DE;
    int prod,sum; // prod of ab and a+b
    for(int i=0;i<500;i++)
    {
        //considering C=i
        prod=1000*(500-i);
        sum=1000-i;
        DE=sqrt((sum*sum)-(4*prod));
        A=(sum+DE)/2; //get a and b respectively
        B=(sum-DE)/2;
        if(condS(A,B,i))
        {
            cout<<A<<" "<<B<<" "<<i<<endl;
            cout<<(A*B*i)<<endl;
            break;
        }
    }
    return 0;
}
