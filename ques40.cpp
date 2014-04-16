#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<sstream>
using namespace std;
int main()
{
		string s("");
		long long int d = 1;
		while(s.size()<1000000)
		{
				stringstream ss;
				ss << d;
				s.append(ss.str());
				d++;
		}
		int pos = 1;
		for(int i=0;i<7;i++)
		{
				cout << pos << " " << s[pos-1] << endl;
				pos*=10;
		}
		return 0;
}
