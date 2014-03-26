#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("input.txt");
    char ch;
    int i,product;
    vector<int> d;
    while(!infile.eof())
    {
        infile >> ch;
        i=ch-'0';
        d.push_back(i);
    }
    infile.close();
    int maxp=0;
    for(int i=0;i<d.size()-5;i++)
    {
        product=d[i]*d[i+1]*d[i+2]*d[i+3]*d[i+4];
        if(product>maxp)
        maxp=product;
    }
    cout<<"Ans="<<maxp;
    return 0;
}
