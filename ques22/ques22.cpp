#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>

using namespace std;
typedef unsigned long long ULL;

int getWordVal(string s)
{
		int val=0;
		for(int i=0;i<s.length();i++)
				val += (s[i] - 'A')+1;
		return val;
}

int main()
{
		ULL ans = 0;
		int pos = 1;
		ifstream infile("sorted.txt");
		if(infile.is_open())
		{
				string line;
				while(getline(infile,line))
				{
						//cout << line;
						int wval = getWordVal(line);
						ans += (pos*wval);
						pos++;
				}
				infile.close();
		}
		cout << ans << endl;
		//cout << getWordVal("COLIN");
}

